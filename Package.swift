// swift-tools-version:5.4
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

extension Target {
    static func privateFrameworkBinding(_ name: String, dependencies: [String] = [], linkedFrameworkName: String? = nil) -> Target {
        .target(name: "_\(name)", dependencies: dependencies.map {
            .init(stringLiteral: "_\($0)")
        }, path: "Sources/\(name)", linkerSettings: [
            .unsafeFlags(["-F/System/Library/PrivateFrameworks", "-framework", linkedFrameworkName ?? name])
        ])
    }
}

extension Product {
    static func privateFrameworkBinding(_ name: String) -> Product {
        .library(name: "_\(name)", targets: ["_\(name)"])
    }
}

extension Package {
    static var privateFrameworksByPackageName: [String: [String]] = [:]
    
    func withPrivateFrameworkBinding(_ name: String, dependencies: [String] = [], linkedFrameworkName: String? = nil) -> Package {
        Package.privateFrameworksByPackageName[self.name, default: []].append("_\(name)")
        products.append(.privateFrameworkBinding(name))
        targets.append(.privateFrameworkBinding(name, dependencies: dependencies, linkedFrameworkName: linkedFrameworkName))
        return self
    }
    
    func withParisTarget() -> Package {
        targets.append(.executableTarget(name: "Paris", dependencies: Package.privateFrameworksByPackageName[self.name, default: []].map(Target.Dependency.init(stringLiteral:))))
        return self
    }
}

let package = Package(
    name: "Paris"
).withPrivateFrameworkBinding("IMCore", dependencies: ["IMSharedUtilities", "IMFoundation"])
 .withPrivateFrameworkBinding("IMSharedUtilities", dependencies: ["IMFoundation"])
 .withPrivateFrameworkBinding("IMFoundation")
 .withPrivateFrameworkBinding("IMDPersistence", dependencies: ["IMSharedUtilities", "IMFoundation"])
 .withPrivateFrameworkBinding("LinkPresentationPrivate", linkedFrameworkName: "LinkPresentation")
 .withPrivateFrameworkBinding("IDSFoundation")
 .withPrivateFrameworkBinding("IDS", dependencies: ["IDSFoundation"])
 .withPrivateFrameworkBinding("FTServices", dependencies: ["IDSFoundation"])
 .withPrivateFrameworkBinding("CoreSymbolication")
 .withPrivateFrameworkBinding("CommunicationsFilter")
 .withPrivateFrameworkBinding("TextInput")
 .withPrivateFrameworkBinding("RemoteTextInput", dependencies: ["TextInput"])
 .withPrivateFrameworkBinding("TVRemoteCore", dependencies: ["RemoteTextInput"])
 .withPrivateFrameworkBinding("CoreBrightness")
 .withPrivateFrameworkBinding("HID")
 .withPrivateFrameworkBinding("DataDetectorsCore")
 .withPrivateFrameworkBinding("IMDaemonCore")
 .withPrivateFrameworkBinding("DigitalTouchShared")
 .withPrivateFrameworkBinding("Security")
 .withPrivateFrameworkBinding("DarwinPrivate", linkedFrameworkName: "System")
 .withPrivateFrameworkBinding("HTTPServer")
 .withPrivateFrameworkBinding("AddressBookCore")
 .withPrivateFrameworkBinding("AOSKit")
 .withPrivateFrameworkBinding("AOSUI")
 .withPrivateFrameworkBinding("AppleAccount")
 .withPrivateFrameworkBinding("AuthKit")
 .withPrivateFrameworkBinding("AuthKitUI", dependencies: ["AuthKit"])
 .withPrivateFrameworkBinding("LoggingSupport")
 .withPrivateFrameworkBinding("SystemAdministration")
 .withPrivateFrameworkBinding("SkyLight")
 .withPrivateFrameworkBinding("AOSAccounts")
 .withPrivateFrameworkBinding("login")
 .withPrivateFrameworkBinding("PassKitCore")
 .withPrivateFrameworkBinding("ConfigurationProfiles")
 .withParisTarget()

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IMPreviewGenerator.h"

#import "IMPreviewGeneratorProtocol.h"
#import "IMUTITypeInformation.h"

@interface IMAnimatedImagePreviewGenerator : IMPreviewGenerator <IMPreviewGeneratorProtocol, IMUTITypeInformation>
{
}

+ (BOOL)writesToDisk;
+ (id)generateAndPersistPreviewFromSourceURL:(id)arg1 withPreviewConstraints:(struct IMPreviewConstraints)arg2 outSize:(struct CGSize *)arg3 error:(id )arg4;
+ (id)UTITypes;

@end


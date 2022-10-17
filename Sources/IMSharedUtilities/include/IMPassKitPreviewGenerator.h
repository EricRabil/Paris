//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IMImagePreviewGenerator.h"

#import "IMPreviewGeneratorProtocol.h"
#import "IMUTITypeInformation.h"

@interface IMPassKitPreviewGenerator : IMImagePreviewGenerator <IMPreviewGeneratorProtocol, IMUTITypeInformation>
{
}

+ (id)passDataForURL:(id)arg1 error:(id )arg2;
+ (BOOL)writesToDisk;
+ (struct CGSize)sizePreviewAtSourceURL:(id)arg1 withPreviewConstraints:(struct IMPreviewConstraints)arg2 error:(id )arg3;
+ (struct CGImage *)newPreviewFromSourceURL:(id)arg1 withPreviewConstraints:(struct IMPreviewConstraints)arg2 error:(id )arg3;
+ (id)UTITypes;

@end


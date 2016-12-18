/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <Messenger/FBObjectShallowCopyProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface FBAttachmentsRenderingPermissions : FBValueObject <FBObjectShallowCopyProtocol, NSCopying, NSCoding> {

	long long _placeAttachmentRenderingPermissions;

}

@property (nonatomic,readonly) long long placeAttachmentRenderingPermissions;              //@synthesize placeAttachmentRenderingPermissions=_placeAttachmentRenderingPermissions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithPlaceAttachmentRenderingPermissions:(long long)arg1 ;
-(long long)placeAttachmentRenderingPermissions;
-(id)shallowCopy;
@end

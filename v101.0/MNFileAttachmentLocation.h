/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL;

@interface MNFileAttachmentLocation : NSObject <NSCopying> {

	unsigned long long _subtype;
	NSString* _server_attachmentId;
	NSString* _server_messageId;
	NSURL* _local_fileURL;

}
+(id)localWithFileURL:(id)arg1 ;
+(id)serverWithAttachmentId:(id)arg1 messageId:(id)arg2 ;
-(void)matchServer:(/*^block*/id)arg1 local:(/*^block*/id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end


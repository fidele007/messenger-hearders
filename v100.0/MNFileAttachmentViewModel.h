/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, NSString;

@interface MNFileAttachmentViewModel : FBValueObject <NSCopying> {

	NSURL* _downloadURL;
	NSString* _filename;
	long long _mimeType;

}

@property (nonatomic,copy,readonly) NSURL * downloadURL;              //@synthesize downloadURL=_downloadURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * filename;              //@synthesize filename=_filename - In the implementation block
@property (nonatomic,readonly) long long mimeType;                    //@synthesize mimeType=_mimeType - In the implementation block
-(id)initWithDownloadURL:(id)arg1 filename:(id)arg2 mimeType:(long long)arg3 ;
-(long long)mimeType;
-(NSURL *)downloadURL;
-(NSString *)filename;
@end


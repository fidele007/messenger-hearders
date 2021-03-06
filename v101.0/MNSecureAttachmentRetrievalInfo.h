/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface MNSecureAttachmentRetrievalInfo : FBValueObject <NSCoding, NSCopying> {

	NSString* _fbId;
	NSData* _fileHash;
	NSString* _downloadKey;
	NSData* _encryptionKey;

}

@property (nonatomic,copy,readonly) NSString * fbId;                     //@synthesize fbId=_fbId - In the implementation block
@property (nonatomic,copy,readonly) NSData * fileHash;                   //@synthesize fileHash=_fileHash - In the implementation block
@property (nonatomic,copy,readonly) NSString * downloadKey;              //@synthesize downloadKey=_downloadKey - In the implementation block
@property (nonatomic,copy,readonly) NSData * encryptionKey;              //@synthesize encryptionKey=_encryptionKey - In the implementation block
-(NSString *)fbId;
-(id)initWithFbId:(id)arg1 fileHash:(id)arg2 downloadKey:(id)arg3 encryptionKey:(id)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSData *)fileHash;
-(NSString *)downloadKey;
-(NSData *)encryptionKey;
@end


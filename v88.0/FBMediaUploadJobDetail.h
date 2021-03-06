/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:03 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class FBMediaUploadContentSource, FBMediaUploadConfig, NSString;

@interface FBMediaUploadJobDetail : FBValueObject <NSCopying, NSCoding> {

	FBMediaUploadContentSource* _contentSource;
	FBMediaUploadConfig* _config;
	NSString* _token;

}

@property (nonatomic,copy,readonly) FBMediaUploadContentSource * contentSource;              //@synthesize contentSource=_contentSource - In the implementation block
@property (nonatomic,copy,readonly) FBMediaUploadConfig * config;                            //@synthesize config=_config - In the implementation block
@property (nonatomic,copy,readonly) NSString * token;                                        //@synthesize token=_token - In the implementation block
-(id)initWithContentSource:(id)arg1 config:(id)arg2 token:(id)arg3 ;
-(FBMediaUploadConfig *)config;
-(NSString *)token;
-(FBMediaUploadContentSource *)contentSource;
@end


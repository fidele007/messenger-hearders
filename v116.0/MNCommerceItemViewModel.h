/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:49 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL;

@interface MNCommerceItemViewModel : FBValueObject <NSCopying> {

	BOOL _showPreview;
	NSString* _name;
	NSString* _metaline1;
	NSString* _metaline2;
	NSString* _metaline3;
	unsigned long long _status;
	NSURL* _previewURL;
	unsigned long long _style;
	NSURL* _targetURL;

}

@property (nonatomic,copy,readonly) NSString * name;                   //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * metaline1;              //@synthesize metaline1=_metaline1 - In the implementation block
@property (nonatomic,copy,readonly) NSString * metaline2;              //@synthesize metaline2=_metaline2 - In the implementation block
@property (nonatomic,copy,readonly) NSString * metaline3;              //@synthesize metaline3=_metaline3 - In the implementation block
@property (nonatomic,readonly) unsigned long long status;              //@synthesize status=_status - In the implementation block
@property (nonatomic,copy,readonly) NSURL * previewURL;                //@synthesize previewURL=_previewURL - In the implementation block
@property (nonatomic,readonly) BOOL showPreview;                       //@synthesize showPreview=_showPreview - In the implementation block
@property (nonatomic,readonly) unsigned long long style;               //@synthesize style=_style - In the implementation block
@property (nonatomic,copy,readonly) NSURL * targetURL;                 //@synthesize targetURL=_targetURL - In the implementation block
-(id)initWithName:(id)arg1 metaline1:(id)arg2 metaline2:(id)arg3 metaline3:(id)arg4 status:(unsigned long long)arg5 previewURL:(id)arg6 showPreview:(BOOL)arg7 style:(unsigned long long)arg8 targetURL:(id)arg9 ;
-(NSString *)metaline1;
-(NSString *)metaline2;
-(NSString *)metaline3;
-(NSURL *)targetURL;
-(NSString *)name;
-(unsigned long long)style;
-(BOOL)showPreview;
-(unsigned long long)status;
-(NSURL *)previewURL;
@end


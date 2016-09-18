/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:46 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString, NSURL;

@interface MNURLRedirectItem : FBValueObject <NSCopying> {

	NSArray* _applicationIdentifiers;
	NSString* _applicationName;
	NSURL* _redirectURL;
	NSString* _analyticsEventName;

}

@property (nonatomic,copy,readonly) NSArray * applicationIdentifiers;              //@synthesize applicationIdentifiers=_applicationIdentifiers - In the implementation block
@property (nonatomic,copy,readonly) NSString * applicationName;                    //@synthesize applicationName=_applicationName - In the implementation block
@property (nonatomic,copy,readonly) NSURL * redirectURL;                           //@synthesize redirectURL=_redirectURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * analyticsEventName;                 //@synthesize analyticsEventName=_analyticsEventName - In the implementation block
-(id)initWithApplicationIdentifiers:(id)arg1 applicationName:(id)arg2 redirectURL:(id)arg3 analyticsEventName:(id)arg4 ;
-(NSArray *)applicationIdentifiers;
-(NSString *)analyticsEventName;
-(NSURL *)redirectURL;
-(NSString *)applicationName;
@end

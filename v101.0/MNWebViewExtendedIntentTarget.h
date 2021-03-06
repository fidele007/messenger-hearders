/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:25 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBIntentTarget.h>

@class NSURL;

@interface MNWebViewExtendedIntentTarget : FBIntentTarget {

	BOOL _showDomainAndSSL;
	NSURL* _url;

}

@property (nonatomic,copy,readonly) NSURL * url;                   //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) BOOL showDomainAndSSL;              //@synthesize showDomainAndSSL=_showDomainAndSSL - In the implementation block
+(id)intentTargetWithURL:(id)arg1 showDomainAndSSL:(BOOL)arg2 ;
-(BOOL)showDomainAndSSL;
-(id)fallbackURLs;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(NSURL *)url;
@end


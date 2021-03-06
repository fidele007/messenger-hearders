/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:06 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNAuthenticationManager.h>
#import <Messenger/FBUserSessionClassProvidable.h>

@class FBAPISessionStore, FBFacebookCredentials, NSString;

@interface MNAuthenticationManagerImpl : NSObject <MNAuthenticationManager, FBUserSessionClassProvidable> {

	FBAPISessionStore* _apiSessionStore;
	FBFacebookCredentials* _pageCredentials;

}

@property (retain) FBFacebookCredentials * pageCredentials;              //@synthesize pageCredentials=_pageCredentials - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(BOOL)hasFacebookCredentials;
-(id)facebookCredentials;
-(BOOL)hasMailboxViewer;
-(id)mailboxViewerFbId;
-(void)setMailboxViewerPageCredentialsOverride:(id)arg1 ;
-(id)mailboxViewerCredentials;
-(id)initWithApiSessionStore:(id)arg1 ;
-(FBFacebookCredentials *)pageCredentials;
-(void)setPageCredentials:(FBFacebookCredentials *)arg1 ;
@end


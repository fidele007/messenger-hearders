/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:50 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBMProfileInfoFetcherDelegate;
@class FBUserSession;

@interface FBMProfileInfoFetcher : NSObject {

	FBUserSession* _userSession;
	id<FBMProfileInfoFetcherDelegate> _delegate;

}
-(void)_profilePictureUpdated:(id)arg1 ;
-(void)_handleDownloadedResponse:(id)arg1 error:(id)arg2 ;
-(void)_didFinishDownloadImageWithResponse:(id)arg1 profileItem:(id)arg2 ;
-(void)_personObjectUpdated:(id)arg1 ;
-(void)_startDownloadProfilePictureWithURL:(id)arg1 profileItem:(id)arg2 ;
-(id)initWithSession:(id)arg1 withDelegate:(id)arg2 ;
-(void)loadProfileInfo;
@end


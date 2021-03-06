/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:53 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNUserRequestHandling.h>

@class MNRemoteSingleUserRequestRunner, MNRemoteMultipleUserRequestRunner, FBNetworkActivityManager, NSString;

@interface MNRemoteUserRequestHandler : NSObject <MNUserRequestHandling> {

	MNRemoteSingleUserRequestRunner* _singleUserRequestHandler;
	MNRemoteMultipleUserRequestRunner* _multipleUserRequestHandler;
	/*^block*/id _userFetcherCreationBlock;
	FBNetworkActivityManager* _networkActivityManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)configureWithNextHandler:(id)arg1 ;
-(void)handleMultipleUserRequest:(id)arg1 currentPendingResult:(id)arg2 listener:(id)arg3 ;
-(void)handleSingleUserRequest:(id)arg1 currentPendingResult:(id)arg2 listener:(id)arg3 ;
-(id)initWithNetworkActivityManager:(id)arg1 userFetcherCreationBlock:(/*^block*/id)arg2 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:50 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class FBExceptionHandler;


@protocol FBAppModule <NSObject,FBMenuItemHandler>
@property (nonatomic,retain) FBExceptionHandler * exceptionHandler; 
@optional
-(BOOL)handleOpenURL:(id)arg1 sourceApplication:(id)arg2 annotation:(id)arg3 appLinksInfo:(id)arg4 withNavigationCoordinator:(id)arg5;
-(BOOL)canOpenLoggedOutURL:(id)arg1 sourceApplication:(id)arg2 annotation:(id)arg3;
-(void)cleanupSession;
-(FBExceptionHandler *)exceptionHandler;
-(void)setExceptionHandler:(id)arg1;

@required
+(id)instanceForSession:(id)arg1 providerMap:(id)arg2;
-(id)URLSegues;
-(id)supportedURLSchemes;
-(id)ID;

@end


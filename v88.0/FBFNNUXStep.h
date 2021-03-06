/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:50 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class FBUserSession, FBFNNuxAppearanceConfiguration;


@protocol FBFNNUXStep
@property (nonatomic,readonly) FBUserSession * session; 
@property (assign,nonatomic,__weak) id<FBFNNUXStepDelegate> stepDelegate; 
@property (assign,nonatomic,__weak) id<FBFNNUXControllerDelegate> controllerDelegate; 
@property (nonatomic,readonly) FBFNNuxAppearanceConfiguration * appearanceConfiguration; 
@property (nonatomic,readonly) unsigned long long nuxMode; 
@required
-(void)setStepDelegate:(id)arg1;
-(id)initWithSession:(id)arg1 appearanceConfiguration:(id)arg2;
-(FBFNNuxAppearanceConfiguration *)appearanceConfiguration;
-(unsigned long long)nuxMode;
-(void)configureInterstitialView:(id)arg1;
-(id<FBFNNUXStepDelegate>)stepDelegate;
-(id<FBFNNUXControllerDelegate>)controllerDelegate;
-(void)setControllerDelegate:(id)arg1;
-(FBUserSession *)session;

@end


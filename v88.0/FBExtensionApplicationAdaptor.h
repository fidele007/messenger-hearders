/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:04 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBApplicationProtocol.h>

@class UIWindow, NSArray, NSString;

@interface FBExtensionApplicationAdaptor : NSObject <FBApplicationProtocol> {

	BOOL _networkActivityIndicatorVisible;
	long long _statusBarOrientation;
	UIWindow* _keyWindow;
	NSArray* _windows;
	NSString* _preferredContentSizeCategory;

}

@property (getter=isProtectedDataAvailable,nonatomic,readonly) BOOL protectedDataAvailable; 
@property (assign,getter=isNetworkActivityIndicatorVisible,nonatomic) BOOL networkActivityIndicatorVisible;              //@synthesize networkActivityIndicatorVisible=_networkActivityIndicatorVisible - In the implementation block
@property (assign,nonatomic) long long statusBarOrientation;                                                             //@synthesize statusBarOrientation=_statusBarOrientation - In the implementation block
@property (nonatomic,readonly) UIWindow * keyWindow;                                                                     //@synthesize keyWindow=_keyWindow - In the implementation block
@property (nonatomic,copy,readonly) NSArray * windows;                                                                   //@synthesize windows=_windows - In the implementation block
@property (nonatomic,copy,readonly) NSString * preferredContentSizeCategory;                                             //@synthesize preferredContentSizeCategory=_preferredContentSizeCategory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)statusBarOrientation;
-(UIWindow *)keyWindow;
-(BOOL)openURL:(id)arg1 ;
-(void)setNetworkActivityIndicatorVisible:(BOOL)arg1 ;
-(NSString *)preferredContentSizeCategory;
-(BOOL)isNetworkActivityIndicatorVisible;
-(void)setStatusBarOrientation:(long long)arg1 ;
-(BOOL)canOpenURL:(id)arg1 ;
-(BOOL)isProtectedDataAvailable;
-(NSArray *)windows;
@end


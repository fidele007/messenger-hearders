/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:59 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNComposerExtensionIconProviding.h>

@class NSString;

@interface MNPaymentsComposerExtensionIconProvider : NSObject <MNComposerExtensionIconProviding> {

	NSString* _currencyCode;

}

@property (nonatomic,copy) NSString * currencyCode;                 //@synthesize currencyCode=_currencyCode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)composerIcon;
-(id)selectedComposerIcon;
-(NSString *)currencyCode;
-(void)setCurrencyCode:(NSString *)arg1 ;
@end


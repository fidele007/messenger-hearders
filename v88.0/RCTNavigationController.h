/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:58 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>
#import <UIKit/UINavigationBarDelegate.h>

@class NSString;

@interface RCTNavigationController : UINavigationController <UINavigationBarDelegate> {

	/*^block*/id _scrollCallback;
	unsigned long long _navigationLock;

}

@property (assign,nonatomic) unsigned long long navigationLock;              //@synthesize navigationLock=_navigationLock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)navigationLock;
-(void)setNavigationLock:(unsigned long long)arg1 ;
-(id)initWithScrollCallback:(/*^block*/id)arg1 ;
-(BOOL)navigationBar:(id)arg1 shouldPopItem:(id)arg2 ;
@end

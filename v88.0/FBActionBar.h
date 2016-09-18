/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:53 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBButtonBar.h>
#import <Messenger/FBUIConfigurable.h>

@class NSArray, UIControl, NSString;

@interface FBActionBar : FBButtonBar <FBUIConfigurable> {

	NSArray* _visibleItems;
	NSArray* _overflowItems;

}

@property (nonatomic,copy) NSArray * visibleItems;                       //@synthesize visibleItems=_visibleItems - In the implementation block
@property (nonatomic,copy) NSArray * overflowItems;                      //@synthesize overflowItems=_overflowItems - In the implementation block
@property (nonatomic,readonly) UIControl * overflowControl; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newWithConfig:(id)arg1 ;
+(id)_resizableBackgroundImageForSize:(unsigned long long)arg1 ;
+(id)_imageForState:(unsigned long long)arg1 capType:(unsigned long long)arg2 actionBarSize:(unsigned long long)arg3 destination:(unsigned long long)arg4 ;
+(double)_heightForFullBleedActionBarOfSize:(unsigned long long)arg1 ;
+(CGSize)minimumSizeForSize:(unsigned long long)arg1 destination:(unsigned long long)arg2 ;
+(id)_imageForKey:(id)arg1 ;
+(void)_setImage:(id)arg1 forKey:(id)arg2 ;
+(id)defaultFBUIConfig;
+(void)setFullBleedActionBarSizeLargeHeight:(double)arg1 ;
+(id)_imageCache;
-(void)_setPrimaryItems:(id)arg1 secondaryItems:(id)arg2 overflowButtonItem:(id)arg3 ;
-(void)setVisibleItems:(NSArray *)arg1 ;
-(void)setOverflowItems:(NSArray *)arg1 ;
-(void)oldConfig:(id)arg1 configDidChange:(id)arg2 ;
-(UIControl *)overflowControl;
-(CGRect)rectOfActionBarItem:(id)arg1 ;
-(NSArray *)overflowItems;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)init;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)_init;
-(void)setItems:(id)arg1 ;
-(id)config;
-(void)applyConfig:(id)arg1 ;
-(NSArray *)visibleItems;
@end


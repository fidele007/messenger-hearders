/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:53 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIScrollView.h>

@protocol FBVideoCreativeToolsApplier, FBMediaCreativeToolParticleFilterViewDelegate;
@class NSMutableArray, UIView;

@interface FBMediaCreativeToolParticleFilterView : UIScrollView {

	NSMutableArray* _buttons;
	NSMutableArray* _labels;
	UIView* _selectionIndicator;
	id<FBVideoCreativeToolsApplier> _creativeToolsApplier;
	unsigned long long _selectedIndex;
	id<FBMediaCreativeToolParticleFilterViewDelegate> _filterDelegate;

}

@property (assign,nonatomic) unsigned long long selectedIndex;                                                     //@synthesize selectedIndex=_selectedIndex - In the implementation block
@property (assign,nonatomic,__weak) id<FBMediaCreativeToolParticleFilterViewDelegate> filterDelegate;              //@synthesize filterDelegate=_filterDelegate - In the implementation block
-(id<FBMediaCreativeToolParticleFilterViewDelegate>)filterDelegate;
-(void)setFilterDelegate:(id<FBMediaCreativeToolParticleFilterViewDelegate>)arg1 ;
-(void)_didSelectButton:(id)arg1 ;
-(void)_addFilterButtonWithTitle:(id)arg1 ;
-(id)initWithCreativeToolsApplier:(id)arg1 ;
-(void)layoutSubviews;
-(unsigned long long)selectedIndex;
-(void)setSelectedIndex:(unsigned long long)arg1 ;
@end


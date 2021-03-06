/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:57 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/MNComposerPrimaryExtensionViewing.h>

@protocol MNComposerActionBarDelegate;
@class NSArray, NSSet, NSString;

@interface MNComposerActionBar : UIView <MNComposerPrimaryExtensionViewing> {

	NSArray* _buttonItems;
	long long _composerBarButtonCollection;
	id<MNComposerActionBarDelegate> _delegate;
	NSSet* _primaryExtensionTypes;

}

@property (assign,nonatomic,__weak) id<MNComposerActionBarDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSSet * primaryExtensionTypes;                                  //@synthesize primaryExtensionTypes=_primaryExtensionTypes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_updateButtonItemsForPrimaryExtensionTypes;
-(void)_removeHandlerFromButton:(id)arg1 ;
-(id)_buttonItemForPrimaryExtensionType:(long long)arg1 ;
-(id)_updateButtonItem:(id)arg1 withComposerActionButton:(id)arg2 ;
-(void)_updateButtonItems:(id)arg1 ;
-(void)_addHandlerToButton:(id)arg1 ;
-(id)composerActionButtonForPrimaryExtensionType:(long long)arg1 ;
-(void)composerPrimaryExtensionDeselected;
-(void)composerPrimaryExtensionTypeSelected:(long long)arg1 ;
-(void)setComposerActionButton:(id)arg1 forPrimaryExtensionType:(long long)arg2 ;
-(id)initWithFrame:(CGRect)arg1 composerBarButtonCollection:(long long)arg2 ;
-(void)setPrimaryExtensionTypes:(NSSet *)arg1 ;
-(NSSet *)primaryExtensionTypes;
-(void)setDelegate:(id<MNComposerActionBarDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<MNComposerActionBarDelegate>)delegate;
-(void)_handleButton:(id)arg1 ;
@end


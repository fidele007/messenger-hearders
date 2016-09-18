/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:53 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBUIConfigBuilder.h>

@class UIColor, NSArray, FBActionBarItem, UIImage, UIFont, NSString;

@interface FBActionBarConfigBuilder : NSObject <FBUIConfigBuilder> {

	unsigned long long _size;
	unsigned long long _destination;
	long long _maxVisibleItems;
	BOOL _enablesButtonBackgroundImage;
	UIColor* _backgroundColor;
	BOOL _enablesBackgroundImage;
	UIEdgeInsets _headerContentEdgeInsets;
	UIEdgeInsets _cardContentEdgeInsets;
	unsigned long long _regularGlyphSize;
	unsigned long long _largeGlyphSize;
	NSArray* _primaryItems;
	NSArray* _secondaryItems;
	FBActionBarItem* _overflowButtonItem;
	BOOL _showSeparator;
	UIImage* _buttonSeparatorImage;
	UIEdgeInsets _buttonSeparatorInsets;
	UIFont* _buttonTitleFont;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)builderForInstance:(id)arg1 ;
+(id)builderFromConfig:(id)arg1 ;
+(id)builderIgnoringClassLevelOverrides;
+(id)builder;
-(id)setButtonSeparatorImage:(id)arg1 ;
-(id)setButtonSeparatorInsets:(UIEdgeInsets)arg1 ;
-(id)setButtonTitleFont:(id)arg1 ;
-(id)setPrimaryItems:(id)arg1 ;
-(id)setMaxVisibleItems:(long long)arg1 ;
-(id)setEnablesButtonBackgroundImage:(BOOL)arg1 ;
-(id)setEnablesBackgroundImage:(BOOL)arg1 ;
-(id)setHeaderContentEdgeInsets:(UIEdgeInsets)arg1 ;
-(id)setCardContentEdgeInsets:(UIEdgeInsets)arg1 ;
-(id)setRegularGlyphSize:(unsigned long long)arg1 ;
-(id)setLargeGlyphSize:(unsigned long long)arg1 ;
-(id)setSecondaryItems:(id)arg1 ;
-(id)setOverflowButtonItem:(id)arg1 ;
-(id)setBackgroundColor:(id)arg1 ;
-(id)_init;
-(id)setSize:(unsigned long long)arg1 ;
-(id)setDestination:(unsigned long long)arg1 ;
-(id)build;
-(id)setShowSeparator:(BOOL)arg1 ;
@end

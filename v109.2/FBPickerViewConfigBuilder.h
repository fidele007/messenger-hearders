/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:41 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <FBSharedFramework/FBUIConfigBuilder.h>

@class UIImage, NSArray, UIColor, FBImageDownloader, NSString;

@interface FBPickerViewConfigBuilder : NSObject <FBUIConfigBuilder> {

	unsigned long long _maximumNumberOfRows;
	unsigned long long _numberOfColumns;
	BOOL _allowsMultipleSelection;
	UIImage* _selectionIndicatorImage;
	NSArray* _items;
	unsigned long long _itemSize;
	unsigned long long _itemStyle;
	UIColor* _itemsBackgroundColor;
	UIColor* _itemsSelectedBackgroundColor;
	double _itemsSelectedImageAlpha;
	double _itemSpacing;
	UIColor* _itemBorderLineColor;
	UIColor* _itemSelectedBorderLineColor;
	double _itemBorderLineWidth;
	UIEdgeInsets _insets;
	BOOL _scrollable;
	UIColor* _backgroundColor;
	FBImageDownloader* _imageDownloader;
	NSString* _identifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)builderForInstance:(id)arg1 ;
+(id)builderFromConfig:(id)arg1 ;
+(id)builderIgnoringClassLevelOverrides;
+(id)builder;
-(id)setItemsSelectedBackgroundColor:(id)arg1 ;
-(id)setItemsSelectedImageAlpha:(double)arg1 ;
-(id)setItemSelectedBorderLineColor:(id)arg1 ;
-(id)setImageDownloader:(id)arg1 ;
-(id)setItemsBackgroundColor:(id)arg1 ;
-(id)setItemBorderLineColor:(id)arg1 ;
-(id)setItemBorderLineWidth:(double)arg1 ;
-(id)setScrollable:(BOOL)arg1 ;
-(id)setBackgroundColor:(id)arg1 ;
-(id)setAllowsMultipleSelection:(BOOL)arg1 ;
-(id)setItemSize:(unsigned long long)arg1 ;
-(id)_init;
-(id)setItems:(id)arg1 ;
-(id)setIdentifier:(id)arg1 ;
-(id)setSelectionIndicatorImage:(id)arg1 ;
-(id)setItemSpacing:(double)arg1 ;
-(id)setInsets:(UIEdgeInsets)arg1 ;
-(id)build;
-(id)setNumberOfColumns:(unsigned long long)arg1 ;
-(id)setItemStyle:(unsigned long long)arg1 ;
-(id)setMaximumNumberOfRows:(unsigned long long)arg1 ;
@end


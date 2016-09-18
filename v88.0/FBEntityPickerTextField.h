/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:56 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UITextField.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Messenger/FBEntityPickerProtocol.h>

@protocol FBEntityPickerTextFieldDelegate;
@class NSMutableArray, FBEntityTokenView, UILabel, UIImageView, UITapGestureRecognizer, NSString, UIFont, UIImage, UIColor;

@interface FBEntityPickerTextField : UITextField <UIGestureRecognizerDelegate, FBEntityPickerProtocol> {

	NSMutableArray* _cellViews;
	FBEntityTokenView* _selectedCell;
	UILabel* _customPlaceholderLabel;
	UIImageView* _customPlaceholderImageView;
	id<FBEntityPickerTextFieldDelegate> _pickerDelegate;
	Class _tokenClass;
	UITapGestureRecognizer* _tapRecognizer;
	long long _lineCount;
	CGPoint _cursorOrigin;
	BOOL _needsCellResize;
	flags _;
	BOOL _forceBlackTintColor;
	UILabel* _truncationLabel;
	NSString* _emptyStateAccessibilityLabel;
	NSString* _searchText;
	unsigned long long _maxLines;
	unsigned long long _tokensTruncated;
	UIFont* _placeholderFont;
	double _placeholderImageMargin;
	double _placeholderTextMargin;
	double _placeholderImageSize;
	double _tokenMarginX;
	double _tokenPaddingX;
	double _tokenPaddingY;
	double _cursorMarginX;
	double _minimumLineHeight;
	UIEdgeInsets _tokenExtraContentInsets;

}

@property (nonatomic,copy) NSString * searchText;                                //@synthesize searchText=_searchText - In the implementation block
@property (nonatomic,copy) NSString * placeholder; 
@property (nonatomic,retain) UIImage * placeholderImage; 
@property (nonatomic,readonly) UILabel * truncationLabel;                        //@synthesize truncationLabel=_truncationLabel - In the implementation block
@property (assign,nonatomic,__weak) UIColor * placeholderTextColor; 
@property (nonatomic,copy) NSString * emptyStateAccessibilityLabel;              //@synthesize emptyStateAccessibilityLabel=_emptyStateAccessibilityLabel - In the implementation block
@property (assign,nonatomic) unsigned long long maxLines;                        //@synthesize maxLines=_maxLines - In the implementation block
@property (nonatomic,readonly) unsigned long long tokensTruncated;               //@synthesize tokensTruncated=_tokensTruncated - In the implementation block
@property (nonatomic,readonly) unsigned long long cellCount; 
@property (assign,nonatomic) BOOL forceBlackTintColor;                           //@synthesize forceBlackTintColor=_forceBlackTintColor - In the implementation block
@property (nonatomic,retain) UIFont * placeholderFont;                           //@synthesize placeholderFont=_placeholderFont - In the implementation block
@property (assign,nonatomic) double placeholderImageMargin;                      //@synthesize placeholderImageMargin=_placeholderImageMargin - In the implementation block
@property (assign,nonatomic) double placeholderTextMargin;                       //@synthesize placeholderTextMargin=_placeholderTextMargin - In the implementation block
@property (nonatomic,readonly) double placeholderTextMarginY; 
@property (assign,nonatomic) double placeholderImageSize;                        //@synthesize placeholderImageSize=_placeholderImageSize - In the implementation block
@property (assign,nonatomic) double tokenMarginX;                                //@synthesize tokenMarginX=_tokenMarginX - In the implementation block
@property (assign,nonatomic) double tokenPaddingX;                               //@synthesize tokenPaddingX=_tokenPaddingX - In the implementation block
@property (assign,nonatomic) double tokenPaddingY;                               //@synthesize tokenPaddingY=_tokenPaddingY - In the implementation block
@property (assign,nonatomic) double cursorMarginX;                               //@synthesize cursorMarginX=_cursorMarginX - In the implementation block
@property (assign,nonatomic) double minimumLineHeight;                           //@synthesize minimumLineHeight=_minimumLineHeight - In the implementation block
@property (assign,nonatomic) UIEdgeInsets tokenExtraContentInsets;               //@synthesize tokenExtraContentInsets=_tokenExtraContentInsets - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_updateHeight;
-(id)addCellWithObject:(id)arg1 ;
-(void)removeCellWithObjectUsingGraphQLID:(id)arg1 ;
-(void)removeAllCellsAndText;
-(void)setEmptyStateAccessibilityLabel:(NSString *)arg1 ;
-(void)setForceBlackTintColor:(BOOL)arg1 ;
-(double)_lineHeight;
-(void)_textFieldDidChange;
-(void)_textFieldDone;
-(id)initWithFrame:(CGRect)arg1 tokenClass:(Class)arg2 ;
-(void)_updateCellSeparatorsFocus;
-(void)_cellSelectionChanged:(id)arg1 ;
-(void)_internalTextReset;
-(void)removeCellWithObject:(id)arg1 ;
-(void)_removeSelectedCellDueToUserInteraction;
-(BOOL)_hasRealText;
-(void)_selectLastSelectableCell;
-(double)_heightWithLines:(long long)arg1 ;
-(double)placeholderTextMarginY;
-(id)insertCellWithObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)_updateCellSeparatorsTail;
-(void)_removeCellWithObject:(id)arg1 useGraphQLID:(BOOL)arg2 ;
-(NSString *)emptyStateAccessibilityLabel;
-(id)cellViewForObject:(id)arg1 ;
-(id)cellViewForTokenIdentifier:(id)arg1 ;
-(id)cellViewsPassingTest:(/*^block*/id)arg1 ;
-(BOOL)hasTokensTruncated;
-(void)sortTokensWithOptions:(unsigned long long)arg1 usingTokenViewComparator:(/*^block*/id)arg2 ;
-(void)setPlaceholderFont:(UIFont *)arg1 ;
-(void)setTokenPaddingX:(double)arg1 ;
-(void)setTokenPaddingY:(double)arg1 ;
-(void)setTokenMarginX:(double)arg1 ;
-(void)setCursorMarginX:(double)arg1 ;
-(void)setMaxLines:(unsigned long long)arg1 ;
-(void)setTokenExtraContentInsets:(UIEdgeInsets)arg1 ;
-(void)deselectCells;
-(UILabel *)truncationLabel;
-(unsigned long long)tokensTruncated;
-(BOOL)forceBlackTintColor;
-(UIFont *)placeholderFont;
-(double)placeholderImageMargin;
-(void)setPlaceholderImageMargin:(double)arg1 ;
-(double)placeholderTextMargin;
-(void)setPlaceholderTextMargin:(double)arg1 ;
-(double)placeholderImageSize;
-(void)setPlaceholderImageSize:(double)arg1 ;
-(double)tokenMarginX;
-(double)tokenPaddingX;
-(double)tokenPaddingY;
-(double)cursorMarginX;
-(UIEdgeInsets)tokenExtraContentInsets;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)resignFirstResponder;
-(BOOL)becomeFirstResponder;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setFont:(id)arg1 ;
-(void)setText:(id)arg1 ;
-(void)setMinimumLineHeight:(double)arg1 ;
-(void)sizeToFit;
-(id)accessibilityLabel;
-(CGRect)editingRectForBounds:(CGRect)arg1 ;
-(CGRect)caretRectForPosition:(id)arg1 ;
-(void)deleteBackward;
-(void)setPlaceholder:(NSString *)arg1 ;
-(double)_layoutCells;
-(double)minimumLineHeight;
-(CGRect)textRectForBounds:(CGRect)arg1 ;
-(void)setPlaceholderImage:(UIImage *)arg1 ;
-(UIImage *)placeholderImage;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSString *)placeholder;
-(NSString *)searchText;
-(CGRect)placeholderRectForBounds:(CGRect)arg1 ;
-(BOOL)isAccessibilityElement;
-(void)setPlaceholderTextColor:(UIColor *)arg1 ;
-(UIColor *)placeholderTextColor;
-(void)_viewWasTapped:(id)arg1 ;
-(void)setSearchText:(NSString *)arg1 ;
-(unsigned long long)maxLines;
-(unsigned long long)cellCount;
@end


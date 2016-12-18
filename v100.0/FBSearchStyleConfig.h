/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIColor;


@protocol FBSearchStyleConfig <NSObject>
@property (nonatomic,readonly) BOOL popoverTypeaheadHasAnimation; 
@property (nonatomic,readonly) double popoverTypeaheadAttachmentPointVerticalOffset; 
@property (nonatomic,readonly) UIColor * sectionHeaderBackgroundColor; 
@property (nonatomic,readonly) UIEdgeInsets insets; 
@property (nonatomic,readonly) BOOL showSuggestionSeparator; 
@property (nonatomic,readonly) UIEdgeInsets suggestionTextInsets; 
@property (nonatomic,readonly) FBLayout suggestionSearchIconLayout; 
@property (nonatomic,readonly) FBLayout suggestionNullStateRecentSearchThumbnailLayout; 
@property (nonatomic,readonly) FBLayout suggestionPhotoSnippetLayout; 
@property (nonatomic,readonly) FBLayout suggestionPhotoSkittleLayout; 
@required
-(double)suggestionRowHeight:(unsigned long long)arg1;
-(FBLayout*)suggestionThumbnailLayout:(unsigned long long)arg1;
-(FBLayout*)suggestionGroupIconLayout:(unsigned long long)arg1;
-(double)suggestionVerifiedBadgeVerticalMargin:(unsigned long long)arg1;
-(BOOL)popoverTypeaheadHasAnimation;
-(double)popoverTypeaheadAttachmentPointVerticalOffset;
-(BOOL)showSuggestionSeparator;
-(UIEdgeInsets)suggestionTextInsets;
-(FBLayout)suggestionSearchIconLayout;
-(FBLayout)suggestionNullStateRecentSearchThumbnailLayout;
-(FBLayout)suggestionPhotoSnippetLayout;
-(FBLayout)suggestionPhotoSkittleLayout;
-(UIColor *)sectionHeaderBackgroundColor;
-(UIEdgeInsets)insets;
-(id)initWithSession:(id)arg1;

@end

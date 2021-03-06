/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:51 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString, MNPeopleCellActionButtonConfiguration;

@interface MNPeopleSuggestionsConfiguration : FBValueObject <NSCopying> {

	BOOL _showHeaderForTopContacts;
	NSArray* _topSuggestedContacts;
	NSString* _topSuggestedContactsSectionTitle;
	MNPeopleCellActionButtonConfiguration* _actionButtonConfiguration;

}

@property (nonatomic,copy,readonly) NSArray * topSuggestedContacts;                                                 //@synthesize topSuggestedContacts=_topSuggestedContacts - In the implementation block
@property (nonatomic,copy,readonly) NSString * topSuggestedContactsSectionTitle;                                    //@synthesize topSuggestedContactsSectionTitle=_topSuggestedContactsSectionTitle - In the implementation block
@property (nonatomic,readonly) BOOL showHeaderForTopContacts;                                                       //@synthesize showHeaderForTopContacts=_showHeaderForTopContacts - In the implementation block
@property (nonatomic,copy,readonly) MNPeopleCellActionButtonConfiguration * actionButtonConfiguration;              //@synthesize actionButtonConfiguration=_actionButtonConfiguration - In the implementation block
-(id)initWithTopSuggestedContacts:(id)arg1 topSuggestedContactsSectionTitle:(id)arg2 showHeaderForTopContacts:(BOOL)arg3 actionButtonConfiguration:(id)arg4 ;
-(MNPeopleCellActionButtonConfiguration *)actionButtonConfiguration;
-(BOOL)showHeaderForTopContacts;
-(NSArray *)topSuggestedContacts;
-(NSString *)topSuggestedContactsSectionTitle;
@end


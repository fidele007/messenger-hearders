/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:46 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MNThreadDetailsPageConfiguration : FBValueObject <NSCopying> {

	BOOL _allowsNicknameEditing;
	NSString* _navigateToAssociatedGroupText;
	NSString* _navigateToAssociatedEventText;
	/*^block*/id _navigateToProfileButtonTextProvider;
	/*^block*/id _nonActiveUserTextProvider;

}

@property (nonatomic,copy,readonly) NSString * navigateToAssociatedGroupText;              //@synthesize navigateToAssociatedGroupText=_navigateToAssociatedGroupText - In the implementation block
@property (nonatomic,copy,readonly) NSString * navigateToAssociatedEventText;              //@synthesize navigateToAssociatedEventText=_navigateToAssociatedEventText - In the implementation block
@property (nonatomic,readonly) id navigateToProfileButtonTextProvider;                     //@synthesize navigateToProfileButtonTextProvider=_navigateToProfileButtonTextProvider - In the implementation block
@property (nonatomic,readonly) id nonActiveUserTextProvider;                               //@synthesize nonActiveUserTextProvider=_nonActiveUserTextProvider - In the implementation block
@property (nonatomic,readonly) BOOL allowsNicknameEditing;                                 //@synthesize allowsNicknameEditing=_allowsNicknameEditing - In the implementation block
-(id)initWithNavigateToAssociatedGroupText:(id)arg1 navigateToAssociatedEventText:(id)arg2 navigateToProfileButtonTextProvider:(/*^block*/id)arg3 nonActiveUserTextProvider:(/*^block*/id)arg4 allowsNicknameEditing:(BOOL)arg5 ;
-(BOOL)allowsNicknameEditing;
-(id)navigateToProfileButtonTextProvider;
-(NSString *)navigateToAssociatedGroupText;
-(NSString *)navigateToAssociatedEventText;
-(id)nonActiveUserTextProvider;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:59 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSIndexPath;

@interface FBExperimentListSearchResultItem : NSObject {

	NSString* _searchResultName;
	NSIndexPath* _atIndexPath;

}

@property (nonatomic,copy,readonly) NSString * searchResultName;              //@synthesize searchResultName=_searchResultName - In the implementation block
@property (nonatomic,readonly) NSIndexPath * atIndexPath;                     //@synthesize atIndexPath=_atIndexPath - In the implementation block
+(id)createSearchResultItemName:(id)arg1 indexPath:(id)arg2 ;
-(NSString *)searchResultName;
-(NSIndexPath *)atIndexPath;
-(id)initWithSearchResultName:(id)arg1 indexPath:(id)arg2 ;
@end


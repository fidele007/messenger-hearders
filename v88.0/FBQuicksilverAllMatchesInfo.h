/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:52 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBQuicksilverPlayerInfo, NSArray;

@interface FBQuicksilverAllMatchesInfo : FBValueObject <NSCopying> {

	FBQuicksilverPlayerInfo* _viewerPlayerInfo;
	NSArray* _existingMatchups;
	NSArray* _suggestedMatchups;

}

@property (nonatomic,copy,readonly) FBQuicksilverPlayerInfo * viewerPlayerInfo;              //@synthesize viewerPlayerInfo=_viewerPlayerInfo - In the implementation block
@property (nonatomic,copy,readonly) NSArray * existingMatchups;                              //@synthesize existingMatchups=_existingMatchups - In the implementation block
@property (nonatomic,copy,readonly) NSArray * suggestedMatchups;                             //@synthesize suggestedMatchups=_suggestedMatchups - In the implementation block
-(id)initWithViewerPlayerInfo:(id)arg1 existingMatchups:(id)arg2 suggestedMatchups:(id)arg3 ;
-(FBQuicksilverPlayerInfo *)viewerPlayerInfo;
-(NSArray *)existingMatchups;
-(NSArray *)suggestedMatchups;
@end


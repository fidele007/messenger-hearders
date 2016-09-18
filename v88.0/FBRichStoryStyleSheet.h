/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:58 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class FBRichStoryStyleDataStore, UIColor;

@interface FBRichStoryStyleSheet : NSObject <NSCopying, NSMutableCopying> {

	FBRichStoryStyleDataStore* _dataStore;

}

@property (nonatomic,readonly) UIColor * documentBackgroundColor; 
-(id)fontResources;
-(UIColor *)documentBackgroundColor;
-(void)enumerateAttributesAndTextStylesUsingBlock:(/*^block*/id)arg1 ;
-(id)textStyleForAttribute:(id)arg1 ;
-(BOOL)requiresExternalResources;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithDataStore:(id)arg1 ;
-(long long)layoutDirection;
-(id)dataStore;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:55 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBWorkingRangeItemViewState.h>

@class NSString;

@interface FBComponentWorkingRangeItemViewState : NSObject <FBWorkingRangeItemViewState> {

	CKComponentLayout* _layout;
	NSString* _identifier;
	unsigned long long _hash;
	id _item;
	CGRect _frame;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id item;                             //@synthesize item=_item - In the implementation block
@property (nonatomic,readonly) CGRect frame;                        //@synthesize frame=_frame - In the implementation block
-(id)initWithItem:(id)arg1 identifier:(id)arg2 frame:(CGRect)arg3 layout:(const CKComponentLayout*)arg4 ;
-(CGRect)frame;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)item;
-(id)copyWithZone:(NSZone*)arg1 ;
-(const CKComponentLayout*)layout;
@end


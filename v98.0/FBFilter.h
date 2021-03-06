/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:15 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBFilterContext;

@interface FBFilter : NSObject {

	FBFilterContext* _filterContext;

}

@property (nonatomic,retain) FBFilterContext * filterContext;              //@synthesize filterContext=_filterContext - In the implementation block
-(FBFilterContext *)filterContext;
-(void)render:(id)arg1 to:(id)arg2 ;
-(void)processCommand:(id)arg1 ;
-(void)setFilterContext:(FBFilterContext *)arg1 ;
-(BOOL)isIdentityFilter;
-(Class)coordinatorClass;
-(void)setParameters:(id)arg1 ;
@end


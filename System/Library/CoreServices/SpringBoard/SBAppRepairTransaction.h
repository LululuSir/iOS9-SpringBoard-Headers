//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBTransaction.h"

@class NSMutableSet, NSSet;

@interface SBAppRepairTransaction : FBTransaction
{
    NSSet *_appInfos;
    NSMutableSet *_repairRequests;
}

@property(readonly, copy, nonatomic) NSSet *appInfos; // @synthesize appInfos=_appInfos;
- (void)_startAppRepairs;
- (void)_completeRequest:(id)arg1 success:(_Bool)arg2 error:(id)arg3;
- (void)_evaluateCompletion;
- (_Bool)_canBeInterrupted;
- (void)_didComplete;
- (void)_begin;
- (void)dealloc;
- (id)initWithApplicationInfos:(id)arg1;

@end


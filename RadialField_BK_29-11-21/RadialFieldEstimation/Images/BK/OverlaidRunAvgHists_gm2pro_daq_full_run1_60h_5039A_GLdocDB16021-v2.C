void OverlaidRunAvgHists_gm2pro_daq_full_run1_60h_5039A_GLdocDB16021-v2()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 24 21:06:55 2021) by ROOT version 6.12/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(73.42857,-1.56542,79.14286,0.2866663);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetLogy();
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   TH1D *h_yCaloRunAvg_1__2 = new TH1D("h_yCaloRunAvg_1__2","",1875,0,150);
   h_yCaloRunAvg_1__2->SetBinContent(940,0.5);
   h_yCaloRunAvg_1__2->SetBinContent(941,0.5833333);
   h_yCaloRunAvg_1__2->SetBinContent(942,0.6666667);
   h_yCaloRunAvg_1__2->SetBinContent(943,0.4166667);
   h_yCaloRunAvg_1__2->SetBinContent(944,0.2916667);
   h_yCaloRunAvg_1__2->SetBinContent(945,0.08333333);
   h_yCaloRunAvg_1__2->SetBinError(940,0.1443376);
   h_yCaloRunAvg_1__2->SetBinError(941,0.1559024);
   h_yCaloRunAvg_1__2->SetBinError(942,0.1666667);
   h_yCaloRunAvg_1__2->SetBinError(943,0.1317616);
   h_yCaloRunAvg_1__2->SetBinError(944,0.1102396);
   h_yCaloRunAvg_1__2->SetBinError(945,0.05892557);
   h_yCaloRunAvg_1__2->SetEntries(61);
   h_yCaloRunAvg_1__2->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#352a86");
   h_yCaloRunAvg_1__2->SetLineColor(ci);

   ci = TColor::GetColor("#352a86");
   h_yCaloRunAvg_1__2->SetMarkerColor(ci);
   h_yCaloRunAvg_1__2->GetXaxis()->SetTitle("#LTy_{calo}#GT [mm]");
   h_yCaloRunAvg_1__2->GetXaxis()->SetRange(926,975);
   h_yCaloRunAvg_1__2->GetXaxis()->CenterTitle(true);
   h_yCaloRunAvg_1__2->GetXaxis()->SetLabelFont(42);
   h_yCaloRunAvg_1__2->GetXaxis()->SetLabelSize(0.035);
   h_yCaloRunAvg_1__2->GetXaxis()->SetTitleOffset(1.1);
   h_yCaloRunAvg_1__2->GetXaxis()->SetTitleFont(42);
   h_yCaloRunAvg_1__2->GetYaxis()->SetTitle("Arb. Units");
   h_yCaloRunAvg_1__2->GetYaxis()->CenterTitle(true);
   h_yCaloRunAvg_1__2->GetYaxis()->SetNdivisions(4000510);
   h_yCaloRunAvg_1__2->GetYaxis()->SetLabelFont(42);
   h_yCaloRunAvg_1__2->GetYaxis()->SetLabelSize(0.035);
   h_yCaloRunAvg_1__2->GetYaxis()->SetTitleOffset(1.1);
   h_yCaloRunAvg_1__2->GetYaxis()->SetTitleFont(42);
   h_yCaloRunAvg_1__2->GetZaxis()->SetLabelFont(42);
   h_yCaloRunAvg_1__2->GetZaxis()->SetLabelSize(0.035);
   h_yCaloRunAvg_1__2->GetZaxis()->SetTitleSize(0.035);
   h_yCaloRunAvg_1__2->GetZaxis()->SetTitleFont(42);
   h_yCaloRunAvg_1__2->Draw("HIST PLC PMC");
   
   TH1D *h_yCaloRunAvg_2__3 = new TH1D("h_yCaloRunAvg_2__3","",1875,0,150);
   h_yCaloRunAvg_2__3->SetBinContent(933,0.625);
   h_yCaloRunAvg_2__3->SetBinContent(934,0.7916667);
   h_yCaloRunAvg_2__3->SetBinContent(935,0.5416667);
   h_yCaloRunAvg_2__3->SetBinContent(936,0.3333333);
   h_yCaloRunAvg_2__3->SetBinContent(937,0.25);
   h_yCaloRunAvg_2__3->SetBinError(933,0.1613743);
   h_yCaloRunAvg_2__3->SetBinError(934,0.1816208);
   h_yCaloRunAvg_2__3->SetBinError(935,0.1502313);
   h_yCaloRunAvg_2__3->SetBinError(936,0.1178511);
   h_yCaloRunAvg_2__3->SetBinError(937,0.1020621);
   h_yCaloRunAvg_2__3->SetEntries(61);
   h_yCaloRunAvg_2__3->SetStats(0);

   ci = TColor::GetColor("#273ba5");
   h_yCaloRunAvg_2__3->SetLineColor(ci);

   ci = TColor::GetColor("#273ba5");
   h_yCaloRunAvg_2__3->SetMarkerColor(ci);
   h_yCaloRunAvg_2__3->GetXaxis()->SetRange(1,15000);
   h_yCaloRunAvg_2__3->GetXaxis()->SetLabelFont(42);
   h_yCaloRunAvg_2__3->GetXaxis()->SetLabelSize(0.035);
   h_yCaloRunAvg_2__3->GetXaxis()->SetTitleSize(0.035);
   h_yCaloRunAvg_2__3->GetXaxis()->SetTitleFont(42);
   h_yCaloRunAvg_2__3->GetYaxis()->SetLabelFont(42);
   h_yCaloRunAvg_2__3->GetYaxis()->SetLabelSize(0.035);
   h_yCaloRunAvg_2__3->GetYaxis()->SetTitleSize(0.035);
   h_yCaloRunAvg_2__3->GetYaxis()->SetTitleOffset(0);
   h_yCaloRunAvg_2__3->GetYaxis()->SetTitleFont(42);
   h_yCaloRunAvg_2__3->GetZaxis()->SetLabelFont(42);
   h_yCaloRunAvg_2__3->GetZaxis()->SetLabelSize(0.035);
   h_yCaloRunAvg_2__3->GetZaxis()->SetTitleSize(0.035);
   h_yCaloRunAvg_2__3->GetZaxis()->SetTitleFont(42);
   h_yCaloRunAvg_2__3->Draw("HIST PLC PMC SAME");
   
   TH1D *h_yCaloRunAvg_3__4 = new TH1D("h_yCaloRunAvg_3__4","",1875,0,150);
   h_yCaloRunAvg_3__4->SetBinContent(951,0.04166667);
   h_yCaloRunAvg_3__4->SetBinContent(952,0.7916667);
   h_yCaloRunAvg_3__4->SetBinContent(953,0.375);
   h_yCaloRunAvg_3__4->SetBinContent(954,0.6666667);
   h_yCaloRunAvg_3__4->SetBinContent(955,0.2916667);
   h_yCaloRunAvg_3__4->SetBinContent(956,0.3333333);
   h_yCaloRunAvg_3__4->SetBinContent(957,0.04166667);
   h_yCaloRunAvg_3__4->SetBinError(951,0.04166667);
   h_yCaloRunAvg_3__4->SetBinError(952,0.1816208);
   h_yCaloRunAvg_3__4->SetBinError(953,0.125);
   h_yCaloRunAvg_3__4->SetBinError(954,0.1666667);
   h_yCaloRunAvg_3__4->SetBinError(955,0.1102396);
   h_yCaloRunAvg_3__4->SetBinError(956,0.1178511);
   h_yCaloRunAvg_3__4->SetBinError(957,0.04166667);
   h_yCaloRunAvg_3__4->SetEntries(61);
   h_yCaloRunAvg_3__4->SetStats(0);

   ci = TColor::GetColor("#1a4dc4");
   h_yCaloRunAvg_3__4->SetLineColor(ci);

   ci = TColor::GetColor("#1a4dc4");
   h_yCaloRunAvg_3__4->SetMarkerColor(ci);
   h_yCaloRunAvg_3__4->GetXaxis()->SetRange(1,15000);
   h_yCaloRunAvg_3__4->GetXaxis()->SetLabelFont(42);
   h_yCaloRunAvg_3__4->GetXaxis()->SetLabelSize(0.035);
   h_yCaloRunAvg_3__4->GetXaxis()->SetTitleSize(0.035);
   h_yCaloRunAvg_3__4->GetXaxis()->SetTitleFont(42);
   h_yCaloRunAvg_3__4->GetYaxis()->SetLabelFont(42);
   h_yCaloRunAvg_3__4->GetYaxis()->SetLabelSize(0.035);
   h_yCaloRunAvg_3__4->GetYaxis()->SetTitleSize(0.035);
   h_yCaloRunAvg_3__4->GetYaxis()->SetTitleOffset(0);
   h_yCaloRunAvg_3__4->GetYaxis()->SetTitleFont(42);
   h_yCaloRunAvg_3__4->GetZaxis()->SetLabelFont(42);
   h_yCaloRunAvg_3__4->GetZaxis()->SetLabelSize(0.035);
   h_yCaloRunAvg_3__4->GetZaxis()->SetTitleSize(0.035);
   h_yCaloRunAvg_3__4->GetZaxis()->SetTitleFont(42);
   h_yCaloRunAvg_3__4->Draw("HIST PLC PMC SAME");
   
   TH1D *h_yCaloRunAvg_4__5 = new TH1D("h_yCaloRunAvg_4__5","",1875,0,150);
   h_yCaloRunAvg_4__5->SetBinContent(942,0.04166667);
   h_yCaloRunAvg_4__5->SetBinContent(943,0.8333333);
   h_yCaloRunAvg_4__5->SetBinContent(944,0.625);
   h_yCaloRunAvg_4__5->SetBinContent(945,0.4583333);
   h_yCaloRunAvg_4__5->SetBinContent(946,0.4583333);
   h_yCaloRunAvg_4__5->SetBinContent(947,0.125);
   h_yCaloRunAvg_4__5->SetBinError(942,0.04166667);
   h_yCaloRunAvg_4__5->SetBinError(943,0.186339);
   h_yCaloRunAvg_4__5->SetBinError(944,0.1613743);
   h_yCaloRunAvg_4__5->SetBinError(945,0.1381927);
   h_yCaloRunAvg_4__5->SetBinError(946,0.1381927);
   h_yCaloRunAvg_4__5->SetBinError(947,0.07216878);
   h_yCaloRunAvg_4__5->SetEntries(61);
   h_yCaloRunAvg_4__5->SetStats(0);

   ci = TColor::GetColor("#0f5edc");
   h_yCaloRunAvg_4__5->SetLineColor(ci);

   ci = TColor::GetColor("#0f5edc");
   h_yCaloRunAvg_4__5->SetMarkerColor(ci);
   h_yCaloRunAvg_4__5->GetXaxis()->SetRange(1,15000);
   h_yCaloRunAvg_4__5->GetXaxis()->SetLabelFont(42);
   h_yCaloRunAvg_4__5->GetXaxis()->SetLabelSize(0.035);
   h_yCaloRunAvg_4__5->GetXaxis()->SetTitleSize(0.035);
   h_yCaloRunAvg_4__5->GetXaxis()->SetTitleFont(42);
   h_yCaloRunAvg_4__5->GetYaxis()->SetLabelFont(42);
   h_yCaloRunAvg_4__5->GetYaxis()->SetLabelSize(0.035);
   h_yCaloRunAvg_4__5->GetYaxis()->SetTitleSize(0.035);
   h_yCaloRunAvg_4__5->GetYaxis()->SetTitleOffset(0);
   h_yCaloRunAvg_4__5->GetYaxis()->SetTitleFont(42);
   h_yCaloRunAvg_4__5->GetZaxis()->SetLabelFont(42);
   h_yCaloRunAvg_4__5->GetZaxis()->SetLabelSize(0.035);
   h_yCaloRunAvg_4__5->GetZaxis()->SetTitleSize(0.035);
   h_yCaloRunAvg_4__5->GetZaxis()->SetTitleFont(42);
   h_yCaloRunAvg_4__5->Draw("HIST PLC PMC SAME");
   
   TH1D *h_yCaloRunAvg_5__6 = new TH1D("h_yCaloRunAvg_5__6","",1875,0,150);
   h_yCaloRunAvg_5__6->SetBinContent(961,0.4583333);
   h_yCaloRunAvg_5__6->SetBinContent(962,0.5833333);
   h_yCaloRunAvg_5__6->SetBinContent(963,0.4166667);
   h_yCaloRunAvg_5__6->SetBinContent(964,0.5416667);
   h_yCaloRunAvg_5__6->SetBinContent(965,0.3333333);
   h_yCaloRunAvg_5__6->SetBinContent(966,0.2083333);
   h_yCaloRunAvg_5__6->SetBinError(961,0.1381927);
   h_yCaloRunAvg_5__6->SetBinError(962,0.1559024);
   h_yCaloRunAvg_5__6->SetBinError(963,0.1317616);
   h_yCaloRunAvg_5__6->SetBinError(964,0.1502313);
   h_yCaloRunAvg_5__6->SetBinError(965,0.1178511);
   h_yCaloRunAvg_5__6->SetBinError(966,0.0931695);
   h_yCaloRunAvg_5__6->SetEntries(61);
   h_yCaloRunAvg_5__6->SetStats(0);

   ci = TColor::GetColor("#116ada");
   h_yCaloRunAvg_5__6->SetLineColor(ci);

   ci = TColor::GetColor("#116ada");
   h_yCaloRunAvg_5__6->SetMarkerColor(ci);
   h_yCaloRunAvg_5__6->GetXaxis()->SetRange(1,15000);
   h_yCaloRunAvg_5__6->GetXaxis()->SetLabelFont(42);
   h_yCaloRunAvg_5__6->GetXaxis()->SetLabelSize(0.035);
   h_yCaloRunAvg_5__6->GetXaxis()->SetTitleSize(0.035);
   h_yCaloRunAvg_5__6->GetXaxis()->SetTitleFont(42);
   h_yCaloRunAvg_5__6->GetYaxis()->SetLabelFont(42);
   h_yCaloRunAvg_5__6->GetYaxis()->SetLabelSize(0.035);
   h_yCaloRunAvg_5__6->GetYaxis()->SetTitleSize(0.035);
   h_yCaloRunAvg_5__6->GetYaxis()->SetTitleOffset(0);
   h_yCaloRunAvg_5__6->GetYaxis()->SetTitleFont(42);
   h_yCaloRunAvg_5__6->GetZaxis()->SetLabelFont(42);
   h_yCaloRunAvg_5__6->GetZaxis()->SetLabelSize(0.035);
   h_yCaloRunAvg_5__6->GetZaxis()->SetTitleSize(0.035);
   h_yCaloRunAvg_5__6->GetZaxis()->SetTitleFont(42);
   h_yCaloRunAvg_5__6->Draw("HIST PLC PMC SAME");
   
   TH1D *h_yCaloRunAvg_6__7 = new TH1D("h_yCaloRunAvg_6__7","",1875,0,150);
   h_yCaloRunAvg_6__7->SetBinContent(949,0.04166667);
   h_yCaloRunAvg_6__7->SetBinContent(950,0.6666667);
   h_yCaloRunAvg_6__7->SetBinContent(951,0.625);
   h_yCaloRunAvg_6__7->SetBinContent(952,0.625);
   h_yCaloRunAvg_6__7->SetBinContent(953,0.1666667);
   h_yCaloRunAvg_6__7->SetBinContent(954,0.375);
   h_yCaloRunAvg_6__7->SetBinContent(955,0.04166667);
   h_yCaloRunAvg_6__7->SetBinError(949,0.04166667);
   h_yCaloRunAvg_6__7->SetBinError(950,0.1666667);
   h_yCaloRunAvg_6__7->SetBinError(951,0.1613743);
   h_yCaloRunAvg_6__7->SetBinError(952,0.1613743);
   h_yCaloRunAvg_6__7->SetBinError(953,0.08333333);
   h_yCaloRunAvg_6__7->SetBinError(954,0.125);
   h_yCaloRunAvg_6__7->SetBinError(955,0.04166667);
   h_yCaloRunAvg_6__7->SetEntries(61);
   h_yCaloRunAvg_6__7->SetStats(0);

   ci = TColor::GetColor("#1277d7");
   h_yCaloRunAvg_6__7->SetLineColor(ci);

   ci = TColor::GetColor("#1277d7");
   h_yCaloRunAvg_6__7->SetMarkerColor(ci);
   h_yCaloRunAvg_6__7->GetXaxis()->SetRange(1,15000);
   h_yCaloRunAvg_6__7->GetXaxis()->SetLabelFont(42);
   h_yCaloRunAvg_6__7->GetXaxis()->SetLabelSize(0.035);
   h_yCaloRunAvg_6__7->GetXaxis()->SetTitleSize(0.035);
   h_yCaloRunAvg_6__7->GetXaxis()->SetTitleFont(42);
   h_yCaloRunAvg_6__7->GetYaxis()->SetLabelFont(42);
   h_yCaloRunAvg_6__7->GetYaxis()->SetLabelSize(0.035);
   h_yCaloRunAvg_6__7->GetYaxis()->SetTitleSize(0.035);
   h_yCaloRunAvg_6__7->GetYaxis()->SetTitleOffset(0);
   h_yCaloRunAvg_6__7->GetYaxis()->SetTitleFont(42);
   h_yCaloRunAvg_6__7->GetZaxis()->SetLabelFont(42);
   h_yCaloRunAvg_6__7->GetZaxis()->SetLabelSize(0.035);
   h_yCaloRunAvg_6__7->GetZaxis()->SetTitleSize(0.035);
   h_yCaloRunAvg_6__7->GetZaxis()->SetTitleFont(42);
   h_yCaloRunAvg_6__7->Draw("HIST PLC PMC SAME");
   
   TH1D *h_yCaloRunAvg_7__8 = new TH1D("h_yCaloRunAvg_7__8","",1875,0,150);
   h_yCaloRunAvg_7__8->SetBinContent(955,0.04166667);
   h_yCaloRunAvg_7__8->SetBinContent(956,0.2083333);
   h_yCaloRunAvg_7__8->SetBinContent(957,0.75);
   h_yCaloRunAvg_7__8->SetBinContent(958,0.375);
   h_yCaloRunAvg_7__8->SetBinContent(959,0.5833333);
   h_yCaloRunAvg_7__8->SetBinContent(960,0.4583333);
   h_yCaloRunAvg_7__8->SetBinContent(961,0.125);
   h_yCaloRunAvg_7__8->SetBinError(955,0.04166667);
   h_yCaloRunAvg_7__8->SetBinError(956,0.0931695);
   h_yCaloRunAvg_7__8->SetBinError(957,0.1767767);
   h_yCaloRunAvg_7__8->SetBinError(958,0.125);
   h_yCaloRunAvg_7__8->SetBinError(959,0.1559024);
   h_yCaloRunAvg_7__8->SetBinError(960,0.1381927);
   h_yCaloRunAvg_7__8->SetBinError(961,0.07216878);
   h_yCaloRunAvg_7__8->SetEntries(61);
   h_yCaloRunAvg_7__8->SetStats(0);

   ci = TColor::GetColor("#1283d4");
   h_yCaloRunAvg_7__8->SetLineColor(ci);

   ci = TColor::GetColor("#1283d4");
   h_yCaloRunAvg_7__8->SetMarkerColor(ci);
   h_yCaloRunAvg_7__8->GetXaxis()->SetRange(1,15000);
   h_yCaloRunAvg_7__8->GetXaxis()->SetLabelFont(42);
   h_yCaloRunAvg_7__8->GetXaxis()->SetLabelSize(0.035);
   h_yCaloRunAvg_7__8->GetXaxis()->SetTitleSize(0.035);
   h_yCaloRunAvg_7__8->GetXaxis()->SetTitleFont(42);
   h_yCaloRunAvg_7__8->GetYaxis()->SetLabelFont(42);
   h_yCaloRunAvg_7__8->GetYaxis()->SetLabelSize(0.035);
   h_yCaloRunAvg_7__8->GetYaxis()->SetTitleSize(0.035);
   h_yCaloRunAvg_7__8->GetYaxis()->SetTitleOffset(0);
   h_yCaloRunAvg_7__8->GetYaxis()->SetTitleFont(42);
   h_yCaloRunAvg_7__8->GetZaxis()->SetLabelFont(42);
   h_yCaloRunAvg_7__8->GetZaxis()->SetLabelSize(0.035);
   h_yCaloRunAvg_7__8->GetZaxis()->SetTitleSize(0.035);
   h_yCaloRunAvg_7__8->GetZaxis()->SetTitleFont(42);
   h_yCaloRunAvg_7__8->Draw("HIST PLC PMC SAME");
   
   TH1D *h_yCaloRunAvg_8__9 = new TH1D("h_yCaloRunAvg_8__9","",1875,0,150);
   h_yCaloRunAvg_8__9->SetBinContent(944,0.2083333);
   h_yCaloRunAvg_8__9->SetBinContent(945,0.6666667);
   h_yCaloRunAvg_8__9->SetBinContent(946,0.6666667);
   h_yCaloRunAvg_8__9->SetBinContent(947,0.4583333);
   h_yCaloRunAvg_8__9->SetBinContent(948,0.375);
   h_yCaloRunAvg_8__9->SetBinContent(949,0.1666667);
   h_yCaloRunAvg_8__9->SetBinError(944,0.0931695);
   h_yCaloRunAvg_8__9->SetBinError(945,0.1666667);
   h_yCaloRunAvg_8__9->SetBinError(946,0.1666667);
   h_yCaloRunAvg_8__9->SetBinError(947,0.1381927);
   h_yCaloRunAvg_8__9->SetBinError(948,0.125);
   h_yCaloRunAvg_8__9->SetBinError(949,0.08333333);
   h_yCaloRunAvg_8__9->SetEntries(61);
   h_yCaloRunAvg_8__9->SetStats(0);

   ci = TColor::GetColor("#0d8fd0");
   h_yCaloRunAvg_8__9->SetLineColor(ci);

   ci = TColor::GetColor("#0d8fd0");
   h_yCaloRunAvg_8__9->SetMarkerColor(ci);
   h_yCaloRunAvg_8__9->GetXaxis()->SetRange(1,15000);
   h_yCaloRunAvg_8__9->GetXaxis()->SetLabelFont(42);
   h_yCaloRunAvg_8__9->GetXaxis()->SetLabelSize(0.035);
   h_yCaloRunAvg_8__9->GetXaxis()->SetTitleSize(0.035);
   h_yCaloRunAvg_8__9->GetXaxis()->SetTitleFont(42);
   h_yCaloRunAvg_8__9->GetYaxis()->SetLabelFont(42);
   h_yCaloRunAvg_8__9->GetYaxis()->SetLabelSize(0.035);
   h_yCaloRunAvg_8__9->GetYaxis()->SetTitleSize(0.035);
   h_yCaloRunAvg_8__9->GetYaxis()->SetTitleOffset(0);
   h_yCaloRunAvg_8__9->GetYaxis()->SetTitleFont(42);
   h_yCaloRunAvg_8__9->GetZaxis()->SetLabelFont(42);
   h_yCaloRunAvg_8__9->GetZaxis()->SetLabelSize(0.035);
   h_yCaloRunAvg_8__9->GetZaxis()->SetTitleSize(0.035);
   h_yCaloRunAvg_8__9->GetZaxis()->SetTitleFont(42);
   h_yCaloRunAvg_8__9->Draw("HIST PLC PMC SAME");
   
   TH1D *h_yCaloRunAvg_9__10 = new TH1D("h_yCaloRunAvg_9__10","",1875,0,150);
   h_yCaloRunAvg_9__10->SetBinContent(935,0.25);
   h_yCaloRunAvg_9__10->SetBinContent(936,0.7916667);
   h_yCaloRunAvg_9__10->SetBinContent(937,0.5416667);
   h_yCaloRunAvg_9__10->SetBinContent(938,0.4583333);
   h_yCaloRunAvg_9__10->SetBinContent(939,0.3333333);
   h_yCaloRunAvg_9__10->SetBinContent(940,0.1666667);
   h_yCaloRunAvg_9__10->SetBinError(935,0.1020621);
   h_yCaloRunAvg_9__10->SetBinError(936,0.1816208);
   h_yCaloRunAvg_9__10->SetBinError(937,0.1502313);
   h_yCaloRunAvg_9__10->SetBinError(938,0.1381927);
   h_yCaloRunAvg_9__10->SetBinError(939,0.1178511);
   h_yCaloRunAvg_9__10->SetBinError(940,0.08333333);
   h_yCaloRunAvg_9__10->SetEntries(61);
   h_yCaloRunAvg_9__10->SetStats(0);

   ci = TColor::GetColor("#089bcc");
   h_yCaloRunAvg_9__10->SetLineColor(ci);

   ci = TColor::GetColor("#089bcc");
   h_yCaloRunAvg_9__10->SetMarkerColor(ci);
   h_yCaloRunAvg_9__10->GetXaxis()->SetRange(1,15000);
   h_yCaloRunAvg_9__10->GetXaxis()->SetLabelFont(42);
   h_yCaloRunAvg_9__10->GetXaxis()->SetLabelSize(0.035);
   h_yCaloRunAvg_9__10->GetXaxis()->SetTitleSize(0.035);
   h_yCaloRunAvg_9__10->GetXaxis()->SetTitleFont(42);
   h_yCaloRunAvg_9__10->GetYaxis()->SetLabelFont(42);
   h_yCaloRunAvg_9__10->GetYaxis()->SetLabelSize(0.035);
   h_yCaloRunAvg_9__10->GetYaxis()->SetTitleSize(0.035);
   h_yCaloRunAvg_9__10->GetYaxis()->SetTitleOffset(0);
   h_yCaloRunAvg_9__10->GetYaxis()->SetTitleFont(42);
   h_yCaloRunAvg_9__10->GetZaxis()->SetLabelFont(42);
   h_yCaloRunAvg_9__10->GetZaxis()->SetLabelSize(0.035);
   h_yCaloRunAvg_9__10->GetZaxis()->SetTitleSize(0.035);
   h_yCaloRunAvg_9__10->GetZaxis()->SetTitleFont(42);
   h_yCaloRunAvg_9__10->Draw("HIST PLC PMC SAME");
   
   TH1D *h_yCaloRunAvg_10__11 = new TH1D("h_yCaloRunAvg_10__11","",1875,0,150);
   h_yCaloRunAvg_10__11->SetBinContent(940,0.2083333);
   h_yCaloRunAvg_10__11->SetBinContent(941,0.75);
   h_yCaloRunAvg_10__11->SetBinContent(942,0.5833333);
   h_yCaloRunAvg_10__11->SetBinContent(943,0.375);
   h_yCaloRunAvg_10__11->SetBinContent(944,0.5);
   h_yCaloRunAvg_10__11->SetBinContent(945,0.125);
   h_yCaloRunAvg_10__11->SetBinError(940,0.0931695);
   h_yCaloRunAvg_10__11->SetBinError(941,0.1767767);
   h_yCaloRunAvg_10__11->SetBinError(942,0.1559024);
   h_yCaloRunAvg_10__11->SetBinError(943,0.125);
   h_yCaloRunAvg_10__11->SetBinError(944,0.1443376);
   h_yCaloRunAvg_10__11->SetBinError(945,0.07216878);
   h_yCaloRunAvg_10__11->SetEntries(61);
   h_yCaloRunAvg_10__11->SetStats(0);

   ci = TColor::GetColor("#0aa6c5");
   h_yCaloRunAvg_10__11->SetLineColor(ci);

   ci = TColor::GetColor("#0aa6c5");
   h_yCaloRunAvg_10__11->SetMarkerColor(ci);
   h_yCaloRunAvg_10__11->GetXaxis()->SetRange(1,15000);
   h_yCaloRunAvg_10__11->GetXaxis()->SetLabelFont(42);
   h_yCaloRunAvg_10__11->GetXaxis()->SetLabelSize(0.035);
   h_yCaloRunAvg_10__11->GetXaxis()->SetTitleSize(0.035);
   h_yCaloRunAvg_10__11->GetXaxis()->SetTitleFont(42);
   h_yCaloRunAvg_10__11->GetYaxis()->SetLabelFont(42);
   h_yCaloRunAvg_10__11->GetYaxis()->SetLabelSize(0.035);
   h_yCaloRunAvg_10__11->GetYaxis()->SetTitleSize(0.035);
   h_yCaloRunAvg_10__11->GetYaxis()->SetTitleOffset(0);
   h_yCaloRunAvg_10__11->GetYaxis()->SetTitleFont(42);
   h_yCaloRunAvg_10__11->GetZaxis()->SetLabelFont(42);
   h_yCaloRunAvg_10__11->GetZaxis()->SetLabelSize(0.035);
   h_yCaloRunAvg_10__11->GetZaxis()->SetTitleSize(0.035);
   h_yCaloRunAvg_10__11->GetZaxis()->SetTitleFont(42);
   h_yCaloRunAvg_10__11->Draw("HIST PLC PMC SAME");
   
   TH1D *h_yCaloRunAvg_11__12 = new TH1D("h_yCaloRunAvg_11__12","",1875,0,150);
   h_yCaloRunAvg_11__12->SetBinContent(935,0.4583333);
   h_yCaloRunAvg_11__12->SetBinContent(936,0.5);
   h_yCaloRunAvg_11__12->SetBinContent(937,0.7083333);
   h_yCaloRunAvg_11__12->SetBinContent(938,0.375);
   h_yCaloRunAvg_11__12->SetBinContent(939,0.25);
   h_yCaloRunAvg_11__12->SetBinContent(940,0.25);
   h_yCaloRunAvg_11__12->SetBinError(935,0.1381927);
   h_yCaloRunAvg_11__12->SetBinError(936,0.1443376);
   h_yCaloRunAvg_11__12->SetBinError(937,0.1717961);
   h_yCaloRunAvg_11__12->SetBinError(938,0.125);
   h_yCaloRunAvg_11__12->SetBinError(939,0.1020621);
   h_yCaloRunAvg_11__12->SetBinError(940,0.1020621);
   h_yCaloRunAvg_11__12->SetEntries(61);
   h_yCaloRunAvg_11__12->SetStats(0);

   ci = TColor::GetColor("#18acb8");
   h_yCaloRunAvg_11__12->SetLineColor(ci);

   ci = TColor::GetColor("#18acb8");
   h_yCaloRunAvg_11__12->SetMarkerColor(ci);
   h_yCaloRunAvg_11__12->GetXaxis()->SetRange(1,15000);
   h_yCaloRunAvg_11__12->GetXaxis()->SetLabelFont(42);
   h_yCaloRunAvg_11__12->GetXaxis()->SetLabelSize(0.035);
   h_yCaloRunAvg_11__12->GetXaxis()->SetTitleSize(0.035);
   h_yCaloRunAvg_11__12->GetXaxis()->SetTitleFont(42);
   h_yCaloRunAvg_11__12->GetYaxis()->SetLabelFont(42);
   h_yCaloRunAvg_11__12->GetYaxis()->SetLabelSize(0.035);
   h_yCaloRunAvg_11__12->GetYaxis()->SetTitleSize(0.035);
   h_yCaloRunAvg_11__12->GetYaxis()->SetTitleOffset(0);
   h_yCaloRunAvg_11__12->GetYaxis()->SetTitleFont(42);
   h_yCaloRunAvg_11__12->GetZaxis()->SetLabelFont(42);
   h_yCaloRunAvg_11__12->GetZaxis()->SetLabelSize(0.035);
   h_yCaloRunAvg_11__12->GetZaxis()->SetTitleSize(0.035);
   h_yCaloRunAvg_11__12->GetZaxis()->SetTitleFont(42);
   h_yCaloRunAvg_11__12->Draw("HIST PLC PMC SAME");
   
   TH1D *h_yCaloRunAvg_12__13 = new TH1D("h_yCaloRunAvg_12__13","",1875,0,150);
   h_yCaloRunAvg_12__13->SetBinContent(933,0.04166667);
   h_yCaloRunAvg_12__13->SetBinContent(934,0.04166667);
   h_yCaloRunAvg_12__13->SetBinContent(935,0.625);
   h_yCaloRunAvg_12__13->SetBinContent(936,0.5416667);
   h_yCaloRunAvg_12__13->SetBinContent(937,0.6666667);
   h_yCaloRunAvg_12__13->SetBinContent(938,0.3333333);
   h_yCaloRunAvg_12__13->SetBinContent(939,0.2083333);
   h_yCaloRunAvg_12__13->SetBinContent(940,0.08333333);
   h_yCaloRunAvg_12__13->SetBinError(933,0.04166667);
   h_yCaloRunAvg_12__13->SetBinError(934,0.04166667);
   h_yCaloRunAvg_12__13->SetBinError(935,0.1613743);
   h_yCaloRunAvg_12__13->SetBinError(936,0.1502313);
   h_yCaloRunAvg_12__13->SetBinError(937,0.1666667);
   h_yCaloRunAvg_12__13->SetBinError(938,0.1178511);
   h_yCaloRunAvg_12__13->SetBinError(939,0.0931695);
   h_yCaloRunAvg_12__13->SetBinError(940,0.05892557);
   h_yCaloRunAvg_12__13->SetEntries(61);
   h_yCaloRunAvg_12__13->SetStats(0);

   ci = TColor::GetColor("#26b3aa");
   h_yCaloRunAvg_12__13->SetLineColor(ci);

   ci = TColor::GetColor("#26b3aa");
   h_yCaloRunAvg_12__13->SetMarkerColor(ci);
   h_yCaloRunAvg_12__13->GetXaxis()->SetRange(1,15000);
   h_yCaloRunAvg_12__13->GetXaxis()->SetLabelFont(42);
   h_yCaloRunAvg_12__13->GetXaxis()->SetLabelSize(0.035);
   h_yCaloRunAvg_12__13->GetXaxis()->SetTitleSize(0.035);
   h_yCaloRunAvg_12__13->GetXaxis()->SetTitleFont(42);
   h_yCaloRunAvg_12__13->GetYaxis()->SetLabelFont(42);
   h_yCaloRunAvg_12__13->GetYaxis()->SetLabelSize(0.035);
   h_yCaloRunAvg_12__13->GetYaxis()->SetTitleSize(0.035);
   h_yCaloRunAvg_12__13->GetYaxis()->SetTitleOffset(0);
   h_yCaloRunAvg_12__13->GetYaxis()->SetTitleFont(42);
   h_yCaloRunAvg_12__13->GetZaxis()->SetLabelFont(42);
   h_yCaloRunAvg_12__13->GetZaxis()->SetLabelSize(0.035);
   h_yCaloRunAvg_12__13->GetZaxis()->SetTitleSize(0.035);
   h_yCaloRunAvg_12__13->GetZaxis()->SetTitleFont(42);
   h_yCaloRunAvg_12__13->Draw("HIST PLC PMC SAME");
   
   TH1D *h_yCaloRunAvg_13__14 = new TH1D("h_yCaloRunAvg_13__14","",1875,0,150);
   h_yCaloRunAvg_13__14->SetBinContent(943,0.375);
   h_yCaloRunAvg_13__14->SetBinContent(944,0.7916667);
   h_yCaloRunAvg_13__14->SetBinContent(945,0.75);
   h_yCaloRunAvg_13__14->SetBinContent(946,0.5);
   h_yCaloRunAvg_13__14->SetBinContent(947,0.125);
   h_yCaloRunAvg_13__14->SetBinError(943,0.125);
   h_yCaloRunAvg_13__14->SetBinError(944,0.1816208);
   h_yCaloRunAvg_13__14->SetBinError(945,0.1767767);
   h_yCaloRunAvg_13__14->SetBinError(946,0.1443376);
   h_yCaloRunAvg_13__14->SetBinError(947,0.07216878);
   h_yCaloRunAvg_13__14->SetEntries(61);
   h_yCaloRunAvg_13__14->SetStats(0);

   ci = TColor::GetColor("#3bb89c");
   h_yCaloRunAvg_13__14->SetLineColor(ci);

   ci = TColor::GetColor("#3bb89c");
   h_yCaloRunAvg_13__14->SetMarkerColor(ci);
   h_yCaloRunAvg_13__14->GetXaxis()->SetRange(1,15000);
   h_yCaloRunAvg_13__14->GetXaxis()->SetLabelFont(42);
   h_yCaloRunAvg_13__14->GetXaxis()->SetLabelSize(0.035);
   h_yCaloRunAvg_13__14->GetXaxis()->SetTitleSize(0.035);
   h_yCaloRunAvg_13__14->GetXaxis()->SetTitleFont(42);
   h_yCaloRunAvg_13__14->GetYaxis()->SetLabelFont(42);
   h_yCaloRunAvg_13__14->GetYaxis()->SetLabelSize(0.035);
   h_yCaloRunAvg_13__14->GetYaxis()->SetTitleSize(0.035);
   h_yCaloRunAvg_13__14->GetYaxis()->SetTitleOffset(0);
   h_yCaloRunAvg_13__14->GetYaxis()->SetTitleFont(42);
   h_yCaloRunAvg_13__14->GetZaxis()->SetLabelFont(42);
   h_yCaloRunAvg_13__14->GetZaxis()->SetLabelSize(0.035);
   h_yCaloRunAvg_13__14->GetZaxis()->SetTitleSize(0.035);
   h_yCaloRunAvg_13__14->GetZaxis()->SetTitleFont(42);
   h_yCaloRunAvg_13__14->Draw("HIST PLC PMC SAME");
   
   TH1D *h_yCaloRunAvg_14__15 = new TH1D("h_yCaloRunAvg_14__15","",1875,0,150);
   h_yCaloRunAvg_14__15->SetBinContent(939,0.08333333);
   h_yCaloRunAvg_14__15->SetBinContent(940,0.7083333);
   h_yCaloRunAvg_14__15->SetBinContent(941,0.625);
   h_yCaloRunAvg_14__15->SetBinContent(942,0.4583333);
   h_yCaloRunAvg_14__15->SetBinContent(943,0.4583333);
   h_yCaloRunAvg_14__15->SetBinContent(944,0.1666667);
   h_yCaloRunAvg_14__15->SetBinContent(945,0.04166667);
   h_yCaloRunAvg_14__15->SetBinError(939,0.05892557);
   h_yCaloRunAvg_14__15->SetBinError(940,0.1717961);
   h_yCaloRunAvg_14__15->SetBinError(941,0.1613743);
   h_yCaloRunAvg_14__15->SetBinError(942,0.1381927);
   h_yCaloRunAvg_14__15->SetBinError(943,0.1381927);
   h_yCaloRunAvg_14__15->SetBinError(944,0.08333333);
   h_yCaloRunAvg_14__15->SetBinError(945,0.04166667);
   h_yCaloRunAvg_14__15->SetEntries(61);
   h_yCaloRunAvg_14__15->SetStats(0);

   ci = TColor::GetColor("#5abb8d");
   h_yCaloRunAvg_14__15->SetLineColor(ci);

   ci = TColor::GetColor("#5abb8d");
   h_yCaloRunAvg_14__15->SetMarkerColor(ci);
   h_yCaloRunAvg_14__15->GetXaxis()->SetRange(1,15000);
   h_yCaloRunAvg_14__15->GetXaxis()->SetLabelFont(42);
   h_yCaloRunAvg_14__15->GetXaxis()->SetLabelSize(0.035);
   h_yCaloRunAvg_14__15->GetXaxis()->SetTitleSize(0.035);
   h_yCaloRunAvg_14__15->GetXaxis()->SetTitleFont(42);
   h_yCaloRunAvg_14__15->GetYaxis()->SetLabelFont(42);
   h_yCaloRunAvg_14__15->GetYaxis()->SetLabelSize(0.035);
   h_yCaloRunAvg_14__15->GetYaxis()->SetTitleSize(0.035);
   h_yCaloRunAvg_14__15->GetYaxis()->SetTitleOffset(0);
   h_yCaloRunAvg_14__15->GetYaxis()->SetTitleFont(42);
   h_yCaloRunAvg_14__15->GetZaxis()->SetLabelFont(42);
   h_yCaloRunAvg_14__15->GetZaxis()->SetLabelSize(0.035);
   h_yCaloRunAvg_14__15->GetZaxis()->SetTitleSize(0.035);
   h_yCaloRunAvg_14__15->GetZaxis()->SetTitleFont(42);
   h_yCaloRunAvg_14__15->Draw("HIST PLC PMC SAME");
   
   TH1D *h_yCaloRunAvg_15__16 = new TH1D("h_yCaloRunAvg_15__16","",1875,0,150);
   h_yCaloRunAvg_15__16->SetBinContent(942,0.04166667);
   h_yCaloRunAvg_15__16->SetBinContent(943,0.6666667);
   h_yCaloRunAvg_15__16->SetBinContent(944,0.5);
   h_yCaloRunAvg_15__16->SetBinContent(945,0.6666667);
   h_yCaloRunAvg_15__16->SetBinContent(946,0.25);
   h_yCaloRunAvg_15__16->SetBinContent(947,0.3333333);
   h_yCaloRunAvg_15__16->SetBinContent(948,0.08333333);
   h_yCaloRunAvg_15__16->SetBinError(942,0.04166667);
   h_yCaloRunAvg_15__16->SetBinError(943,0.1666667);
   h_yCaloRunAvg_15__16->SetBinError(944,0.1443376);
   h_yCaloRunAvg_15__16->SetBinError(945,0.1666667);
   h_yCaloRunAvg_15__16->SetBinError(946,0.1020621);
   h_yCaloRunAvg_15__16->SetBinError(947,0.1178511);
   h_yCaloRunAvg_15__16->SetBinError(948,0.05892557);
   h_yCaloRunAvg_15__16->SetEntries(61);
   h_yCaloRunAvg_15__16->SetStats(0);

   ci = TColor::GetColor("#79bd7d");
   h_yCaloRunAvg_15__16->SetLineColor(ci);

   ci = TColor::GetColor("#79bd7d");
   h_yCaloRunAvg_15__16->SetMarkerColor(ci);
   h_yCaloRunAvg_15__16->GetXaxis()->SetRange(1,15000);
   h_yCaloRunAvg_15__16->GetXaxis()->SetLabelFont(42);
   h_yCaloRunAvg_15__16->GetXaxis()->SetLabelSize(0.035);
   h_yCaloRunAvg_15__16->GetXaxis()->SetTitleSize(0.035);
   h_yCaloRunAvg_15__16->GetXaxis()->SetTitleFont(42);
   h_yCaloRunAvg_15__16->GetYaxis()->SetLabelFont(42);
   h_yCaloRunAvg_15__16->GetYaxis()->SetLabelSize(0.035);
   h_yCaloRunAvg_15__16->GetYaxis()->SetTitleSize(0.035);
   h_yCaloRunAvg_15__16->GetYaxis()->SetTitleOffset(0);
   h_yCaloRunAvg_15__16->GetYaxis()->SetTitleFont(42);
   h_yCaloRunAvg_15__16->GetZaxis()->SetLabelFont(42);
   h_yCaloRunAvg_15__16->GetZaxis()->SetLabelSize(0.035);
   h_yCaloRunAvg_15__16->GetZaxis()->SetTitleSize(0.035);
   h_yCaloRunAvg_15__16->GetZaxis()->SetTitleFont(42);
   h_yCaloRunAvg_15__16->Draw("HIST PLC PMC SAME");
   
   TH1D *h_yCaloRunAvg_16__17 = new TH1D("h_yCaloRunAvg_16__17","",1875,0,150);
   h_yCaloRunAvg_16__17->SetBinContent(938,0.25);
   h_yCaloRunAvg_16__17->SetBinContent(939,0.7083333);
   h_yCaloRunAvg_16__17->SetBinContent(940,0.5833333);
   h_yCaloRunAvg_16__17->SetBinContent(941,0.4166667);
   h_yCaloRunAvg_16__17->SetBinContent(942,0.4583333);
   h_yCaloRunAvg_16__17->SetBinContent(943,0.125);
   h_yCaloRunAvg_16__17->SetBinError(938,0.1020621);
   h_yCaloRunAvg_16__17->SetBinError(939,0.1717961);
   h_yCaloRunAvg_16__17->SetBinError(940,0.1559024);
   h_yCaloRunAvg_16__17->SetBinError(941,0.1317616);
   h_yCaloRunAvg_16__17->SetBinError(942,0.1381927);
   h_yCaloRunAvg_16__17->SetBinError(943,0.07216878);
   h_yCaloRunAvg_16__17->SetEntries(61);
   h_yCaloRunAvg_16__17->SetStats(0);

   ci = TColor::GetColor("#94be71");
   h_yCaloRunAvg_16__17->SetLineColor(ci);

   ci = TColor::GetColor("#94be71");
   h_yCaloRunAvg_16__17->SetMarkerColor(ci);
   h_yCaloRunAvg_16__17->GetXaxis()->SetRange(1,15000);
   h_yCaloRunAvg_16__17->GetXaxis()->SetLabelFont(42);
   h_yCaloRunAvg_16__17->GetXaxis()->SetLabelSize(0.035);
   h_yCaloRunAvg_16__17->GetXaxis()->SetTitleSize(0.035);
   h_yCaloRunAvg_16__17->GetXaxis()->SetTitleFont(42);
   h_yCaloRunAvg_16__17->GetYaxis()->SetLabelFont(42);
   h_yCaloRunAvg_16__17->GetYaxis()->SetLabelSize(0.035);
   h_yCaloRunAvg_16__17->GetYaxis()->SetTitleSize(0.035);
   h_yCaloRunAvg_16__17->GetYaxis()->SetTitleOffset(0);
   h_yCaloRunAvg_16__17->GetYaxis()->SetTitleFont(42);
   h_yCaloRunAvg_16__17->GetZaxis()->SetLabelFont(42);
   h_yCaloRunAvg_16__17->GetZaxis()->SetLabelSize(0.035);
   h_yCaloRunAvg_16__17->GetZaxis()->SetTitleSize(0.035);
   h_yCaloRunAvg_16__17->GetZaxis()->SetTitleFont(42);
   h_yCaloRunAvg_16__17->Draw("HIST PLC PMC SAME");
   
   TH1D *h_yCaloRunAvg_17__18 = new TH1D("h_yCaloRunAvg_17__18","",1875,0,150);
   h_yCaloRunAvg_17__18->SetBinContent(947,0.08333333);
   h_yCaloRunAvg_17__18->SetBinContent(948,0.9166667);
   h_yCaloRunAvg_17__18->SetBinContent(949,0.4583333);
   h_yCaloRunAvg_17__18->SetBinContent(950,0.5);
   h_yCaloRunAvg_17__18->SetBinContent(951,0.4583333);
   h_yCaloRunAvg_17__18->SetBinContent(952,0.125);
   h_yCaloRunAvg_17__18->SetBinError(947,0.05892557);
   h_yCaloRunAvg_17__18->SetBinError(948,0.195434);
   h_yCaloRunAvg_17__18->SetBinError(949,0.1381927);
   h_yCaloRunAvg_17__18->SetBinError(950,0.1443376);
   h_yCaloRunAvg_17__18->SetBinError(951,0.1381927);
   h_yCaloRunAvg_17__18->SetBinError(952,0.07216878);
   h_yCaloRunAvg_17__18->SetEntries(61);
   h_yCaloRunAvg_17__18->SetStats(0);

   ci = TColor::GetColor("#aebc67");
   h_yCaloRunAvg_17__18->SetLineColor(ci);

   ci = TColor::GetColor("#aebc67");
   h_yCaloRunAvg_17__18->SetMarkerColor(ci);
   h_yCaloRunAvg_17__18->GetXaxis()->SetRange(1,15000);
   h_yCaloRunAvg_17__18->GetXaxis()->SetLabelFont(42);
   h_yCaloRunAvg_17__18->GetXaxis()->SetLabelSize(0.035);
   h_yCaloRunAvg_17__18->GetXaxis()->SetTitleSize(0.035);
   h_yCaloRunAvg_17__18->GetXaxis()->SetTitleFont(42);
   h_yCaloRunAvg_17__18->GetYaxis()->SetLabelFont(42);
   h_yCaloRunAvg_17__18->GetYaxis()->SetLabelSize(0.035);
   h_yCaloRunAvg_17__18->GetYaxis()->SetTitleSize(0.035);
   h_yCaloRunAvg_17__18->GetYaxis()->SetTitleOffset(0);
   h_yCaloRunAvg_17__18->GetYaxis()->SetTitleFont(42);
   h_yCaloRunAvg_17__18->GetZaxis()->SetLabelFont(42);
   h_yCaloRunAvg_17__18->GetZaxis()->SetLabelSize(0.035);
   h_yCaloRunAvg_17__18->GetZaxis()->SetTitleSize(0.035);
   h_yCaloRunAvg_17__18->GetZaxis()->SetTitleFont(42);
   h_yCaloRunAvg_17__18->Draw("HIST PLC PMC SAME");
   
   TH1D *h_yCaloRunAvg_18__19 = new TH1D("h_yCaloRunAvg_18__19","",1875,0,150);
   h_yCaloRunAvg_18__19->SetBinContent(951,0.1666667);
   h_yCaloRunAvg_18__19->SetBinContent(952,0.7083333);
   h_yCaloRunAvg_18__19->SetBinContent(953,0.5);
   h_yCaloRunAvg_18__19->SetBinContent(954,0.5416667);
   h_yCaloRunAvg_18__19->SetBinContent(955,0.4583333);
   h_yCaloRunAvg_18__19->SetBinContent(956,0.1666667);
   h_yCaloRunAvg_18__19->SetBinError(951,0.08333333);
   h_yCaloRunAvg_18__19->SetBinError(952,0.1717961);
   h_yCaloRunAvg_18__19->SetBinError(953,0.1443376);
   h_yCaloRunAvg_18__19->SetBinError(954,0.1502313);
   h_yCaloRunAvg_18__19->SetBinError(955,0.1381927);
   h_yCaloRunAvg_18__19->SetBinError(956,0.08333333);
   h_yCaloRunAvg_18__19->SetEntries(61);
   h_yCaloRunAvg_18__19->SetStats(0);

   ci = TColor::GetColor("#c7bb5c");
   h_yCaloRunAvg_18__19->SetLineColor(ci);

   ci = TColor::GetColor("#c7bb5c");
   h_yCaloRunAvg_18__19->SetMarkerColor(ci);
   h_yCaloRunAvg_18__19->GetXaxis()->SetRange(1,15000);
   h_yCaloRunAvg_18__19->GetXaxis()->SetLabelFont(42);
   h_yCaloRunAvg_18__19->GetXaxis()->SetLabelSize(0.035);
   h_yCaloRunAvg_18__19->GetXaxis()->SetTitleSize(0.035);
   h_yCaloRunAvg_18__19->GetXaxis()->SetTitleFont(42);
   h_yCaloRunAvg_18__19->GetYaxis()->SetLabelFont(42);
   h_yCaloRunAvg_18__19->GetYaxis()->SetLabelSize(0.035);
   h_yCaloRunAvg_18__19->GetYaxis()->SetTitleSize(0.035);
   h_yCaloRunAvg_18__19->GetYaxis()->SetTitleOffset(0);
   h_yCaloRunAvg_18__19->GetYaxis()->SetTitleFont(42);
   h_yCaloRunAvg_18__19->GetZaxis()->SetLabelFont(42);
   h_yCaloRunAvg_18__19->GetZaxis()->SetLabelSize(0.035);
   h_yCaloRunAvg_18__19->GetZaxis()->SetTitleSize(0.035);
   h_yCaloRunAvg_18__19->GetZaxis()->SetTitleFont(42);
   h_yCaloRunAvg_18__19->Draw("HIST PLC PMC SAME");
   
   TH1D *h_yCaloRunAvg_19__20 = new TH1D("h_yCaloRunAvg_19__20","",1875,0,150);
   h_yCaloRunAvg_19__20->SetBinContent(937,0.7916667);
   h_yCaloRunAvg_19__20->SetBinContent(938,0.75);
   h_yCaloRunAvg_19__20->SetBinContent(939,0.4583333);
   h_yCaloRunAvg_19__20->SetBinContent(940,0.5416667);
   h_yCaloRunAvg_19__20->SetBinError(937,0.1816208);
   h_yCaloRunAvg_19__20->SetBinError(938,0.1767767);
   h_yCaloRunAvg_19__20->SetBinError(939,0.1381927);
   h_yCaloRunAvg_19__20->SetBinError(940,0.1502313);
   h_yCaloRunAvg_19__20->SetEntries(61);
   h_yCaloRunAvg_19__20->SetStats(0);

   ci = TColor::GetColor("#dabd50");
   h_yCaloRunAvg_19__20->SetLineColor(ci);

   ci = TColor::GetColor("#dabd50");
   h_yCaloRunAvg_19__20->SetMarkerColor(ci);
   h_yCaloRunAvg_19__20->GetXaxis()->SetRange(1,15000);
   h_yCaloRunAvg_19__20->GetXaxis()->SetLabelFont(42);
   h_yCaloRunAvg_19__20->GetXaxis()->SetLabelSize(0.035);
   h_yCaloRunAvg_19__20->GetXaxis()->SetTitleSize(0.035);
   h_yCaloRunAvg_19__20->GetXaxis()->SetTitleFont(42);
   h_yCaloRunAvg_19__20->GetYaxis()->SetLabelFont(42);
   h_yCaloRunAvg_19__20->GetYaxis()->SetLabelSize(0.035);
   h_yCaloRunAvg_19__20->GetYaxis()->SetTitleSize(0.035);
   h_yCaloRunAvg_19__20->GetYaxis()->SetTitleOffset(0);
   h_yCaloRunAvg_19__20->GetYaxis()->SetTitleFont(42);
   h_yCaloRunAvg_19__20->GetZaxis()->SetLabelFont(42);
   h_yCaloRunAvg_19__20->GetZaxis()->SetLabelSize(0.035);
   h_yCaloRunAvg_19__20->GetZaxis()->SetTitleSize(0.035);
   h_yCaloRunAvg_19__20->GetZaxis()->SetTitleFont(42);
   h_yCaloRunAvg_19__20->Draw("HIST PLC PMC SAME");
   
   TH1D *h_yCaloRunAvg_20__21 = new TH1D("h_yCaloRunAvg_20__21","",1875,0,150);
   h_yCaloRunAvg_20__21->SetBinContent(943,0.25);
   h_yCaloRunAvg_20__21->SetBinContent(944,0.75);
   h_yCaloRunAvg_20__21->SetBinContent(945,0.625);
   h_yCaloRunAvg_20__21->SetBinContent(946,0.2916667);
   h_yCaloRunAvg_20__21->SetBinContent(947,0.4583333);
   h_yCaloRunAvg_20__21->SetBinContent(948,0.1666667);
   h_yCaloRunAvg_20__21->SetBinError(943,0.1020621);
   h_yCaloRunAvg_20__21->SetBinError(944,0.1767767);
   h_yCaloRunAvg_20__21->SetBinError(945,0.1613743);
   h_yCaloRunAvg_20__21->SetBinError(946,0.1102396);
   h_yCaloRunAvg_20__21->SetBinError(947,0.1381927);
   h_yCaloRunAvg_20__21->SetBinError(948,0.08333333);
   h_yCaloRunAvg_20__21->SetEntries(61);
   h_yCaloRunAvg_20__21->SetStats(0);

   ci = TColor::GetColor("#eac243");
   h_yCaloRunAvg_20__21->SetLineColor(ci);

   ci = TColor::GetColor("#eac243");
   h_yCaloRunAvg_20__21->SetMarkerColor(ci);
   h_yCaloRunAvg_20__21->GetXaxis()->SetRange(1,15000);
   h_yCaloRunAvg_20__21->GetXaxis()->SetLabelFont(42);
   h_yCaloRunAvg_20__21->GetXaxis()->SetLabelSize(0.035);
   h_yCaloRunAvg_20__21->GetXaxis()->SetTitleSize(0.035);
   h_yCaloRunAvg_20__21->GetXaxis()->SetTitleFont(42);
   h_yCaloRunAvg_20__21->GetYaxis()->SetLabelFont(42);
   h_yCaloRunAvg_20__21->GetYaxis()->SetLabelSize(0.035);
   h_yCaloRunAvg_20__21->GetYaxis()->SetTitleSize(0.035);
   h_yCaloRunAvg_20__21->GetYaxis()->SetTitleOffset(0);
   h_yCaloRunAvg_20__21->GetYaxis()->SetTitleFont(42);
   h_yCaloRunAvg_20__21->GetZaxis()->SetLabelFont(42);
   h_yCaloRunAvg_20__21->GetZaxis()->SetLabelSize(0.035);
   h_yCaloRunAvg_20__21->GetZaxis()->SetTitleSize(0.035);
   h_yCaloRunAvg_20__21->GetZaxis()->SetTitleFont(42);
   h_yCaloRunAvg_20__21->Draw("HIST PLC PMC SAME");
   
   TH1D *h_yCaloRunAvg_21__22 = new TH1D("h_yCaloRunAvg_21__22","",1875,0,150);
   h_yCaloRunAvg_21__22->SetBinContent(942,0.04166667);
   h_yCaloRunAvg_21__22->SetBinContent(943,0.3333333);
   h_yCaloRunAvg_21__22->SetBinContent(944,0.625);
   h_yCaloRunAvg_21__22->SetBinContent(945,0.5416667);
   h_yCaloRunAvg_21__22->SetBinContent(946,0.4583333);
   h_yCaloRunAvg_21__22->SetBinContent(947,0.3333333);
   h_yCaloRunAvg_21__22->SetBinContent(948,0.2083333);
   h_yCaloRunAvg_21__22->SetBinError(942,0.04166667);
   h_yCaloRunAvg_21__22->SetBinError(943,0.1178511);
   h_yCaloRunAvg_21__22->SetBinError(944,0.1613743);
   h_yCaloRunAvg_21__22->SetBinError(945,0.1502313);
   h_yCaloRunAvg_21__22->SetBinError(946,0.1381927);
   h_yCaloRunAvg_21__22->SetBinError(947,0.1178511);
   h_yCaloRunAvg_21__22->SetBinError(948,0.0931695);
   h_yCaloRunAvg_21__22->SetEntries(61);
   h_yCaloRunAvg_21__22->SetStats(0);

   ci = TColor::GetColor("#f9c735");
   h_yCaloRunAvg_21__22->SetLineColor(ci);

   ci = TColor::GetColor("#f9c735");
   h_yCaloRunAvg_21__22->SetMarkerColor(ci);
   h_yCaloRunAvg_21__22->GetXaxis()->SetRange(1,15000);
   h_yCaloRunAvg_21__22->GetXaxis()->SetLabelFont(42);
   h_yCaloRunAvg_21__22->GetXaxis()->SetLabelSize(0.035);
   h_yCaloRunAvg_21__22->GetXaxis()->SetTitleSize(0.035);
   h_yCaloRunAvg_21__22->GetXaxis()->SetTitleFont(42);
   h_yCaloRunAvg_21__22->GetYaxis()->SetLabelFont(42);
   h_yCaloRunAvg_21__22->GetYaxis()->SetLabelSize(0.035);
   h_yCaloRunAvg_21__22->GetYaxis()->SetTitleSize(0.035);
   h_yCaloRunAvg_21__22->GetYaxis()->SetTitleOffset(0);
   h_yCaloRunAvg_21__22->GetYaxis()->SetTitleFont(42);
   h_yCaloRunAvg_21__22->GetZaxis()->SetLabelFont(42);
   h_yCaloRunAvg_21__22->GetZaxis()->SetLabelSize(0.035);
   h_yCaloRunAvg_21__22->GetZaxis()->SetTitleSize(0.035);
   h_yCaloRunAvg_21__22->GetZaxis()->SetTitleFont(42);
   h_yCaloRunAvg_21__22->Draw("HIST PLC PMC SAME");
   
   TH1D *h_yCaloRunAvg_22__23 = new TH1D("h_yCaloRunAvg_22__23","",1875,0,150);
   h_yCaloRunAvg_22__23->SetBinContent(951,0.1666667);
   h_yCaloRunAvg_22__23->SetBinContent(952,0.7916667);
   h_yCaloRunAvg_22__23->SetBinContent(953,0.4166667);
   h_yCaloRunAvg_22__23->SetBinContent(954,0.5833333);
   h_yCaloRunAvg_22__23->SetBinContent(955,0.4583333);
   h_yCaloRunAvg_22__23->SetBinContent(956,0.125);
   h_yCaloRunAvg_22__23->SetBinError(951,0.08333333);
   h_yCaloRunAvg_22__23->SetBinError(952,0.1816208);
   h_yCaloRunAvg_22__23->SetBinError(953,0.1317616);
   h_yCaloRunAvg_22__23->SetBinError(954,0.1559024);
   h_yCaloRunAvg_22__23->SetBinError(955,0.1381927);
   h_yCaloRunAvg_22__23->SetBinError(956,0.07216878);
   h_yCaloRunAvg_22__23->SetEntries(61);
   h_yCaloRunAvg_22__23->SetStats(0);

   ci = TColor::GetColor("#fcd529");
   h_yCaloRunAvg_22__23->SetLineColor(ci);

   ci = TColor::GetColor("#fcd529");
   h_yCaloRunAvg_22__23->SetMarkerColor(ci);
   h_yCaloRunAvg_22__23->GetXaxis()->SetRange(1,15000);
   h_yCaloRunAvg_22__23->GetXaxis()->SetLabelFont(42);
   h_yCaloRunAvg_22__23->GetXaxis()->SetLabelSize(0.035);
   h_yCaloRunAvg_22__23->GetXaxis()->SetTitleSize(0.035);
   h_yCaloRunAvg_22__23->GetXaxis()->SetTitleFont(42);
   h_yCaloRunAvg_22__23->GetYaxis()->SetLabelFont(42);
   h_yCaloRunAvg_22__23->GetYaxis()->SetLabelSize(0.035);
   h_yCaloRunAvg_22__23->GetYaxis()->SetTitleSize(0.035);
   h_yCaloRunAvg_22__23->GetYaxis()->SetTitleOffset(0);
   h_yCaloRunAvg_22__23->GetYaxis()->SetTitleFont(42);
   h_yCaloRunAvg_22__23->GetZaxis()->SetLabelFont(42);
   h_yCaloRunAvg_22__23->GetZaxis()->SetLabelSize(0.035);
   h_yCaloRunAvg_22__23->GetZaxis()->SetTitleSize(0.035);
   h_yCaloRunAvg_22__23->GetZaxis()->SetTitleFont(42);
   h_yCaloRunAvg_22__23->Draw("HIST PLC PMC SAME");
   
   TH1D *h_yCaloRunAvg_23__24 = new TH1D("h_yCaloRunAvg_23__24","",1875,0,150);
   h_yCaloRunAvg_23__24->SetBinContent(939,0.25);
   h_yCaloRunAvg_23__24->SetBinContent(940,0.9166667);
   h_yCaloRunAvg_23__24->SetBinContent(941,0.5416667);
   h_yCaloRunAvg_23__24->SetBinContent(942,0.3333333);
   h_yCaloRunAvg_23__24->SetBinContent(943,0.375);
   h_yCaloRunAvg_23__24->SetBinContent(944,0.125);
   h_yCaloRunAvg_23__24->SetBinError(939,0.1020621);
   h_yCaloRunAvg_23__24->SetBinError(940,0.195434);
   h_yCaloRunAvg_23__24->SetBinError(941,0.1502313);
   h_yCaloRunAvg_23__24->SetBinError(942,0.1178511);
   h_yCaloRunAvg_23__24->SetBinError(943,0.125);
   h_yCaloRunAvg_23__24->SetBinError(944,0.07216878);
   h_yCaloRunAvg_23__24->SetEntries(61);
   h_yCaloRunAvg_23__24->SetStats(0);

   ci = TColor::GetColor("#fae61c");
   h_yCaloRunAvg_23__24->SetLineColor(ci);

   ci = TColor::GetColor("#fae61c");
   h_yCaloRunAvg_23__24->SetMarkerColor(ci);
   h_yCaloRunAvg_23__24->GetXaxis()->SetRange(1,15000);
   h_yCaloRunAvg_23__24->GetXaxis()->SetLabelFont(42);
   h_yCaloRunAvg_23__24->GetXaxis()->SetLabelSize(0.035);
   h_yCaloRunAvg_23__24->GetXaxis()->SetTitleSize(0.035);
   h_yCaloRunAvg_23__24->GetXaxis()->SetTitleFont(42);
   h_yCaloRunAvg_23__24->GetYaxis()->SetLabelFont(42);
   h_yCaloRunAvg_23__24->GetYaxis()->SetLabelSize(0.035);
   h_yCaloRunAvg_23__24->GetYaxis()->SetTitleSize(0.035);
   h_yCaloRunAvg_23__24->GetYaxis()->SetTitleOffset(0);
   h_yCaloRunAvg_23__24->GetYaxis()->SetTitleFont(42);
   h_yCaloRunAvg_23__24->GetZaxis()->SetLabelFont(42);
   h_yCaloRunAvg_23__24->GetZaxis()->SetLabelSize(0.035);
   h_yCaloRunAvg_23__24->GetZaxis()->SetTitleSize(0.035);
   h_yCaloRunAvg_23__24->GetZaxis()->SetTitleFont(42);
   h_yCaloRunAvg_23__24->Draw("HIST PLC PMC SAME");
   
   TH1D *h_yCaloRunAvg_1__25 = new TH1D("h_yCaloRunAvg_1__25","",1875,0,150);
   h_yCaloRunAvg_1__25->SetBinContent(933,0.02777778);
   h_yCaloRunAvg_1__25->SetBinContent(934,0.03472222);
   h_yCaloRunAvg_1__25->SetBinContent(935,0.078125);
   h_yCaloRunAvg_1__25->SetBinContent(936,0.09027778);
   h_yCaloRunAvg_1__25->SetBinContent(937,0.1232639);
   h_yCaloRunAvg_1__25->SetBinContent(938,0.09027778);
   h_yCaloRunAvg_1__25->SetBinContent(939,0.09548611);
   h_yCaloRunAvg_1__25->SetBinContent(940,0.6649306);
   h_yCaloRunAvg_1__25->SetBinContent(941,0.7048611);
   h_yCaloRunAvg_1__25->SetBinContent(942,0.7760417);
   h_yCaloRunAvg_1__25->SetBinContent(943,0.5920139);
   h_yCaloRunAvg_1__25->SetBinContent(944,0.4826389);
   h_yCaloRunAvg_1__25->SetBinContent(945,0.2482639);
   h_yCaloRunAvg_1__25->SetBinContent(946,0.109375);
   h_yCaloRunAvg_1__25->SetBinContent(947,0.07986111);
   h_yCaloRunAvg_1__25->SetBinContent(948,0.07291667);
   h_yCaloRunAvg_1__25->SetBinContent(949,0.02777778);
   h_yCaloRunAvg_1__25->SetBinContent(950,0.04861111);
   h_yCaloRunAvg_1__25->SetBinContent(951,0.06076389);
   h_yCaloRunAvg_1__25->SetBinContent(952,0.1267361);
   h_yCaloRunAvg_1__25->SetBinContent(953,0.06076389);
   h_yCaloRunAvg_1__25->SetBinContent(954,0.09027778);
   h_yCaloRunAvg_1__25->SetBinContent(955,0.05381944);
   h_yCaloRunAvg_1__25->SetBinContent(956,0.03472222);
   h_yCaloRunAvg_1__25->SetBinContent(957,0.03298611);
   h_yCaloRunAvg_1__25->SetBinContent(958,0.015625);
   h_yCaloRunAvg_1__25->SetBinContent(959,0.02430556);
   h_yCaloRunAvg_1__25->SetBinContent(960,0.01909722);
   h_yCaloRunAvg_1__25->SetBinContent(961,0.02430556);
   h_yCaloRunAvg_1__25->SetBinContent(962,0.02430556);
   h_yCaloRunAvg_1__25->SetBinContent(963,0.01736111);
   h_yCaloRunAvg_1__25->SetBinContent(964,0.02256944);
   h_yCaloRunAvg_1__25->SetBinContent(965,0.01388889);
   h_yCaloRunAvg_1__25->SetBinContent(966,0.008680556);
   h_yCaloRunAvg_1__25->SetBinError(933,0.006944444);
   h_yCaloRunAvg_1__25->SetBinError(934,0.007764125);
   h_yCaloRunAvg_1__25->SetBinError(935,0.01164619);
   h_yCaloRunAvg_1__25->SetBinError(936,0.01251928);
   h_yCaloRunAvg_1__25->SetBinError(937,0.01462873);
   h_yCaloRunAvg_1__25->SetBinError(938,0.01251928);
   h_yCaloRunAvg_1__25->SetBinError(939,0.01287534);
   h_yCaloRunAvg_1__25->SetBinError(940,0.1453261);
   h_yCaloRunAvg_1__25->SetBinError(941,0.1565776);
   h_yCaloRunAvg_1__25->SetBinError(942,0.1672354);
   h_yCaloRunAvg_1__25->SetBinError(943,0.1329118);
   h_yCaloRunAvg_1__25->SetBinError(944,0.1117333);
   h_yCaloRunAvg_1__25->SetBinError(945,0.0613071);
   h_yCaloRunAvg_1__25->SetBinError(946,0.01377995);
   h_yCaloRunAvg_1__25->SetBinError(947,0.01177488);
   h_yCaloRunAvg_1__25->SetBinError(948,0.01125129);
   h_yCaloRunAvg_1__25->SetBinError(949,0.006944444);
   h_yCaloRunAvg_1__25->SetBinError(950,0.009186636);
   h_yCaloRunAvg_1__25->SetBinError(951,0.01027097);
   h_yCaloRunAvg_1__25->SetBinError(952,0.01483334);
   h_yCaloRunAvg_1__25->SetBinError(953,0.01027097);
   h_yCaloRunAvg_1__25->SetBinError(954,0.01251928);
   h_yCaloRunAvg_1__25->SetBinError(955,0.009666258);
   h_yCaloRunAvg_1__25->SetBinError(956,0.007764125);
   h_yCaloRunAvg_1__25->SetBinError(957,0.007567533);
   h_yCaloRunAvg_1__25->SetBinError(958,0.005208333);
   h_yCaloRunAvg_1__25->SetBinError(959,0.006495933);
   h_yCaloRunAvg_1__25->SetBinError(960,0.005758029);
   h_yCaloRunAvg_1__25->SetBinError(961,0.006495933);
   h_yCaloRunAvg_1__25->SetBinError(962,0.006495933);
   h_yCaloRunAvg_1__25->SetBinError(963,0.005490065);
   h_yCaloRunAvg_1__25->SetBinError(964,0.006259638);
   h_yCaloRunAvg_1__25->SetBinError(965,0.004910464);
   h_yCaloRunAvg_1__25->SetBinError(966,0.003882062);
   h_yCaloRunAvg_1__25->SetEntries(1464);

   ci = TColor::GetColor("#ff0000");
   h_yCaloRunAvg_1__25->SetFillColor(ci);
   h_yCaloRunAvg_1__25->SetFillStyle(3644);

   ci = TColor::GetColor("#ff0000");
   h_yCaloRunAvg_1__25->SetLineColor(ci);
   h_yCaloRunAvg_1__25->GetXaxis()->SetTitle("#LTy_{calo}#GT [mm]");
   h_yCaloRunAvg_1__25->GetXaxis()->SetRange(926,975);
   h_yCaloRunAvg_1__25->GetXaxis()->CenterTitle(true);
   h_yCaloRunAvg_1__25->GetXaxis()->SetLabelFont(42);
   h_yCaloRunAvg_1__25->GetXaxis()->SetLabelSize(0.035);
   h_yCaloRunAvg_1__25->GetXaxis()->SetTitleOffset(1.1);
   h_yCaloRunAvg_1__25->GetXaxis()->SetTitleFont(42);
   h_yCaloRunAvg_1__25->GetYaxis()->SetTitle("Arb. Units");
   h_yCaloRunAvg_1__25->GetYaxis()->CenterTitle(true);
   h_yCaloRunAvg_1__25->GetYaxis()->SetNdivisions(4000510);
   h_yCaloRunAvg_1__25->GetYaxis()->SetLabelFont(42);
   h_yCaloRunAvg_1__25->GetYaxis()->SetLabelSize(0.035);
   h_yCaloRunAvg_1__25->GetYaxis()->SetTitleOffset(1.1);
   h_yCaloRunAvg_1__25->GetYaxis()->SetTitleFont(42);
   h_yCaloRunAvg_1__25->GetZaxis()->SetLabelFont(42);
   h_yCaloRunAvg_1__25->GetZaxis()->SetLabelSize(0.035);
   h_yCaloRunAvg_1__25->GetZaxis()->SetTitleSize(0.035);
   h_yCaloRunAvg_1__25->GetZaxis()->SetTitleFont(42);
   h_yCaloRunAvg_1__25->Draw("HIST L2F SAME");
   
   TPaveText *pt = new TPaveText(0.61,0.69,0.69,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextFont(44);
   pt->SetTextSize(20);
   TText *pt_LaTex = pt->AddText("#LTy_{total}#GT = 75.446
#pm0.03
 mm");
   pt_LaTex = pt->AddText("#sigma_{total} = 0.441
#pm0.02
 mm");
   pt->Draw();
   TLine *line = new TLine(74,0,78,0);
   line->Draw();
   
   TLegend *leg = new TLegend(0.81,0.15,0.99,0.85,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("h_yCaloRunAvg_1","Total","lpf");

   ci = TColor::GetColor("#ff0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3644);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("h_yCaloRunAvg_1","Calo 1","lpf");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#352a86");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#352a86");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("h_yCaloRunAvg_2","Calo 2","lpf");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#273ba5");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#273ba5");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("h_yCaloRunAvg_3","Calo 3","lpf");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#1a4dc4");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#1a4dc4");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("h_yCaloRunAvg_4","Calo 4","lpf");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#0f5edc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0f5edc");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("h_yCaloRunAvg_5","Calo 5","lpf");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#116ada");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#116ada");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("h_yCaloRunAvg_6","Calo 6","lpf");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#1277d7");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#1277d7");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("h_yCaloRunAvg_7","Calo 7","lpf");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#1283d4");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#1283d4");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("h_yCaloRunAvg_8","Calo 8","lpf");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#0d8fd0");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0d8fd0");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("h_yCaloRunAvg_9","Calo 9","lpf");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#089bcc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#089bcc");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("h_yCaloRunAvg_10","Calo 10","lpf");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#0aa6c5");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0aa6c5");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("h_yCaloRunAvg_11","Calo 11","lpf");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#18acb8");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#18acb8");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("h_yCaloRunAvg_12","Calo 12","lpf");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#26b3aa");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#26b3aa");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("h_yCaloRunAvg_13","Calo 13","lpf");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#3bb89c");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#3bb89c");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("h_yCaloRunAvg_14","Calo 14","lpf");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#5abb8d");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#5abb8d");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("h_yCaloRunAvg_15","Calo 15","lpf");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#79bd7d");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#79bd7d");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("h_yCaloRunAvg_16","Calo 16","lpf");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#94be71");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#94be71");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("h_yCaloRunAvg_17","Calo 17","lpf");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#aebc67");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#aebc67");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("h_yCaloRunAvg_18","Calo 18","lpf");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#c7bb5c");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#c7bb5c");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("h_yCaloRunAvg_19","Calo 19","lpf");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#dabd50");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#dabd50");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("h_yCaloRunAvg_20","Calo 20","lpf");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#eac243");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#eac243");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("h_yCaloRunAvg_21","Calo 21","lpf");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#f9c735");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#f9c735");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("h_yCaloRunAvg_22","Calo 22","lpf");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#fcd529");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#fcd529");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("h_yCaloRunAvg_23","Calo 23","lpf");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#fae61c");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#fae61c");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}

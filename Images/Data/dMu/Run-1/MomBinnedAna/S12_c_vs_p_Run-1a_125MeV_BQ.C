void S12_c_vs_p_Run-1a_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov 22 17:30:08 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(496.3942,-2.456407,2729.756,5.543785);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1017[22] = {
   366.7752,
   456.7578,
   570.5921,
   695.3071,
   816.0224,
   938.5575,
   1062.711,
   1188.407,
   1312.772,
   1435.939,
   1561.834,
   1685.365,
   1810.678,
   1935.176,
   2060.183,
   2185.076,
   2309.276,
   2432.899,
   2559.529,
   2678.792,
   2781.466,
   2888.259};
   Double_t Graph0_fy1017[22] = {
   0.5754616,
   0.269976,
   0.05880238,
   0.0152761,
   0.04547026,
   0.0936611,
   0.09309753,
   0.05604516,
   -0.01338483,
   -0.02993718,
   0.01455128,
   0.03140787,
   0.05079541,
   0.0246008,
   0.01010099,
   0.000957801,
   -0.00332539,
   0.04701286,
   0.03253468,
   0.03923795,
   0.216176,
   2.414592};
   Double_t Graph0_fex1017[22] = {
   0.3450021,
   0.157226,
   0.1048064,
   0.07056723,
   0.05633048,
   0.05067462,
   0.04796335,
   0.04633051,
   0.04666407,
   0.04687252,
   0.05021785,
   0.05265346,
   0.0590909,
   0.06447877,
   0.07353012,
   0.0811364,
   0.09313613,
   0.1112972,
   0.1333412,
   0.1533601,
   0.3115684,
   1.744149};
   Double_t Graph0_fey1017[22] = {
   1.698503,
   0.1639992,
   0.07931305,
   0.04702242,
   0.03227503,
   0.02637726,
   0.0231661,
   0.02084673,
   0.01945935,
   0.01841825,
   0.0183791,
   0.01771328,
   0.01830208,
   0.0184189,
   0.0193095,
   0.01965683,
   0.02071217,
   0.022687,
   0.02434122,
   0.02709975,
   0.06956233,
   1.795828};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1017,Graph0_fy1017,Graph0_fex1017,Graph0_fey1017);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01017 = new TH1F("Graph_Graph01017","S12",100,114.0729,3142.36);
   Graph_Graph01017->SetMinimum(-1.656387);
   Graph_Graph01017->SetMaximum(4.743766);
   Graph_Graph01017->SetDirectory(0);
   Graph_Graph01017->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01017->SetLineColor(ci);
   Graph_Graph01017->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01017->GetXaxis()->SetRange(21,79);
   Graph_Graph01017->GetXaxis()->CenterTitle(true);
   Graph_Graph01017->GetXaxis()->SetLabelFont(42);
   Graph_Graph01017->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01017->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01017->GetXaxis()->SetTitleFont(42);
   Graph_Graph01017->GetYaxis()->SetTitle("c [mrad] / 125 MeV");
   Graph_Graph01017->GetYaxis()->CenterTitle(true);
   Graph_Graph01017->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01017->GetYaxis()->SetLabelFont(42);
   Graph_Graph01017->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01017->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01017->GetYaxis()->SetTitleFont(42);
   Graph_Graph01017->GetZaxis()->SetLabelFont(42);
   Graph_Graph01017->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01017->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01017);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}

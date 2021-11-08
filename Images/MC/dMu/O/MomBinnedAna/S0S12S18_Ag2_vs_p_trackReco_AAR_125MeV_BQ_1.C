void S0S12S18_Ag2_vs_p_trackReco_AAR_125MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 08:59:34 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(522,-1.723512,2727,7.339654);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1053[22] = {
   312,
   437,
   562,
   687,
   812,
   937,
   1062,
   1187,
   1312,
   1437,
   1562,
   1687,
   1812,
   1937,
   2062,
   2187,
   2312,
   2437,
   2562,
   2687,
   2812,
   2937};
   Double_t Graph0_fy1053[22] = {
   3.622647,
   0.1678555,
   -0.0534889,
   0.1158388,
   0.08190673,
   0.06214633,
   -0.0625626,
   -0.04138078,
   0.02535373,
   -0.04984208,
   0.004270493,
   0.09350201,
   0.06663392,
   -0.08416806,
   0.0200349,
   -0.01321205,
   0.09275188,
   -0.01906524,
   0.02632651,
   -0.06679349,
   -0.05880146,
   5.494104};
   Double_t Graph0_fex1053[22] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1053[22] = {
   1.355739,
   0.2476458,
   0.1594956,
   0.09586894,
   0.07274065,
   0.06247812,
   0.05675746,
   0.05342491,
   0.05124006,
   0.04965509,
   0.04869032,
   0.04755697,
   0.04763297,
   0.04851041,
   0.04955108,
   0.05067375,
   0.05224625,
   0.05433494,
   0.05323544,
   0.05175403,
   0.08398539,
   0.3350218};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1053,Graph0_fy1053,Graph0_fex1053,Graph0_fey1053);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01053 = new TH1F("Graph_Graph01053","S0S12S18_",100,49.5,3199.5);
   Graph_Graph01053->SetMinimum(-0.8171955);
   Graph_Graph01053->SetMaximum(6.433337);
   Graph_Graph01053->SetDirectory(0);
   Graph_Graph01053->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01053->SetLineColor(ci);
   Graph_Graph01053->GetXaxis()->SetTitle("p [MeV]: in range p #minus 62 < p < p #plus 62 MeV");
   Graph_Graph01053->GetXaxis()->SetRange(23,78);
   Graph_Graph01053->GetXaxis()->CenterTitle(true);
   Graph_Graph01053->GetXaxis()->SetLabelFont(42);
   Graph_Graph01053->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01053->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01053->GetXaxis()->SetTitleFont(42);
   Graph_Graph01053->GetYaxis()->SetTitle("A_{g#minus2} [mrad]");
   Graph_Graph01053->GetYaxis()->CenterTitle(true);
   Graph_Graph01053->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01053->GetYaxis()->SetLabelFont(42);
   Graph_Graph01053->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01053->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01053->GetYaxis()->SetTitleFont(42);
   Graph_Graph01053->GetZaxis()->SetLabelFont(42);
   Graph_Graph01053->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01053->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01053);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.3920101,0.9362587,0.6079899,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0S12S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}

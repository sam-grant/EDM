void S18_c_vs_p_Run-1b_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Nov  9 09:18:09 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(522,-2.228107,2727,2.487351);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1027[22] = {
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
   Double_t Graph0_fy1027[22] = {
   0.06112381,
   0.08466373,
   -0.009890132,
   -0.001362642,
   0.008062768,
   -0.03735553,
   -0.00969401,
   0.02743048,
   0.06654973,
   0.09625437,
   0.03379846,
   -0.02434192,
   -0.03029826,
   -0.0007107547,
   0.02500916,
   0.01671007,
   0.02420607,
   -0.04546553,
   -0.04140671,
   -0.0200836,
   -0.1864303,
   0.1296221};
   Double_t Graph0_fex1027[22] = {
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
   Double_t Graph0_fey1027[22] = {
   1.411971,
   0.1318329,
   0.06440094,
   0.03925621,
   0.02752674,
   0.02272704,
   0.02002822,
   0.01810561,
   0.01710143,
   0.01630857,
   0.01625674,
   0.01588819,
   0.0165907,
   0.01692178,
   0.01793482,
   0.0183358,
   0.01940682,
   0.02126512,
   0.02267857,
   0.02513011,
   0.0649565,
   1.571819};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1027,Graph0_fy1027,Graph0_fex1027,Graph0_fey1027);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01027 = new TH1F("Graph_Graph01027","S18",100,49.5,3199.5);
   Graph_Graph01027->SetMinimum(-1.756561);
   Graph_Graph01027->SetMaximum(2.015805);
   Graph_Graph01027->SetDirectory(0);
   Graph_Graph01027->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01027->SetLineColor(ci);
   Graph_Graph01027->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01027->GetXaxis()->SetRange(23,78);
   Graph_Graph01027->GetXaxis()->CenterTitle(true);
   Graph_Graph01027->GetXaxis()->SetLabelFont(42);
   Graph_Graph01027->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01027->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01027->GetXaxis()->SetTitleFont(42);
   Graph_Graph01027->GetYaxis()->SetTitle("c [mrad] / 125 MeV");
   Graph_Graph01027->GetYaxis()->CenterTitle(true);
   Graph_Graph01027->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01027->GetYaxis()->SetLabelFont(42);
   Graph_Graph01027->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01027->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01027->GetYaxis()->SetTitleFont(42);
   Graph_Graph01027->GetZaxis()->SetLabelFont(42);
   Graph_Graph01027->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01027->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01027);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}

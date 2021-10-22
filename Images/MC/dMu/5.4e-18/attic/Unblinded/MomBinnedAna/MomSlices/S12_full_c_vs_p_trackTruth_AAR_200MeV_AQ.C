void S12_full_c_vs_p_trackTruth_AAR_200MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Sep 12 20:02:54 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-420.75,-14.99611,3456.75,2.934967);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1073[15] = {
   100,
   300,
   500,
   700,
   900,
   1100,
   1300,
   1500,
   1700,
   1900,
   2100,
   2300,
   2500,
   2700,
   2900};
   Double_t Graph0_fy1073[15] = {
   -12.0076,
   -3.757903,
   -1.813391,
   -0.7450476,
   -0.4987572,
   -0.3393054,
   -0.2986392,
   -0.2255914,
   -0.202374,
   -0.1408024,
   -0.1648123,
   -0.1143916,
   -0.1009258,
   -0.07465257,
   -0.105101};
   Double_t Graph0_fex1073[15] = {
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100};
   Double_t Graph0_fey1073[15] = {
   1.98999e-06,
   0.1068803,
   0.03381569,
   0.02530971,
   0.02218434,
   0.02048031,
   0.01906697,
   0.01800554,
   0.01739883,
   0.01740289,
   0.01767616,
   0.01858334,
   0.0200966,
   0.02110579,
   0.02857465};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1073,Graph0_fy1073,Graph0_fex1073,Graph0_fey1073);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01073 = new TH1F("Graph_Graph01073","S12",100,0,3300);
   Graph_Graph01073->SetMinimum(-13.20301);
   Graph_Graph01073->SetMaximum(1.141859);
   Graph_Graph01073->SetDirectory(0);
   Graph_Graph01073->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01073->SetLineColor(ci);
   Graph_Graph01073->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph01073->GetXaxis()->SetRange(0,93);
   Graph_Graph01073->GetXaxis()->CenterTitle(true);
   Graph_Graph01073->GetXaxis()->SetLabelFont(42);
   Graph_Graph01073->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01073->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01073->GetXaxis()->SetTitleFont(42);
   Graph_Graph01073->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01073->GetYaxis()->CenterTitle(true);
   Graph_Graph01073->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01073->GetYaxis()->SetLabelFont(42);
   Graph_Graph01073->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01073->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01073->GetYaxis()->SetTitleFont(42);
   Graph_Graph01073->GetZaxis()->SetLabelFont(42);
   Graph_Graph01073->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01073->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01073);
   
   gre->Draw("ap");
   
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

void S18_full_c_vs_p_trackReco_AAR_200MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Sep 12 22:36:54 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-196.8,-4.102875,3411.2,17.64389);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1099[14] = {
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
   Double_t Graph0_fy1099[14] = {
   13.56013,
   2.520643,
   -0.4389488,
   -0.3940092,
   -0.3834039,
   -0.276525,
   -0.3145442,
   -0.2192222,
   -0.2288669,
   -0.1210077,
   -0.1396513,
   -0.1490166,
   -0.09289699,
   -0.1260371};
   Double_t Graph0_fex1099[14] = {
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
   Double_t Graph0_fey1099[14] = {
   0.4592981,
   0.08113045,
   0.03946489,
   0.02741691,
   0.02347765,
   0.02174573,
   0.02094429,
   0.02044377,
   0.02105682,
   0.02231481,
   0.02406008,
   0.02545796,
   0.02743366,
   0.09461344};
   TGraphErrors *gre = new TGraphErrors(14,Graph0_fx1099,Graph0_fy1099,Graph0_fex1099,Graph0_fey1099);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01099 = new TH1F("Graph_Graph01099","S18",100,0,3280);
   Graph_Graph01099->SetMinimum(-1.928198);
   Graph_Graph01099->SetMaximum(15.46922);
   Graph_Graph01099->SetDirectory(0);
   Graph_Graph01099->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01099->SetLineColor(ci);
   Graph_Graph01099->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph01099->GetXaxis()->SetRange(6,93);
   Graph_Graph01099->GetXaxis()->CenterTitle(true);
   Graph_Graph01099->GetXaxis()->SetLabelFont(42);
   Graph_Graph01099->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01099->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01099->GetXaxis()->SetTitleFont(42);
   Graph_Graph01099->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01099->GetYaxis()->CenterTitle(true);
   Graph_Graph01099->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01099->GetYaxis()->SetLabelFont(42);
   Graph_Graph01099->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01099->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01099->GetYaxis()->SetTitleFont(42);
   Graph_Graph01099->GetZaxis()->SetLabelFont(42);
   Graph_Graph01099->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01099->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01099);
   
   gre->Draw("ap");
   
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

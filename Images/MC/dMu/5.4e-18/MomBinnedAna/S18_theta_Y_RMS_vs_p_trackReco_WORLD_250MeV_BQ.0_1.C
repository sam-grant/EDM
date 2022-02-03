void S18_theta_Y_RMS_vs_p_trackReco_WORLD_250MeV_BQ.0_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Feb  2 11:32:07 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.4911,-5.28512,3407.421,61.22963);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1137[11] = {
   451.955,
   653.2003,
   880.4912,
   1123.059,
   1370.838,
   1619.616,
   1866.457,
   2115.103,
   2363.145,
   2612.952,
   2787.692};
   Double_t Graph0_fy1137[11] = {
   31.01537,
   25.74085,
   21.15186,
   17.86684,
   15.38167,
   13.23807,
   11.36015,
   9.596074,
   7.983979,
   6.248774,
   4.941681};
   Double_t Graph0_fex1137[11] = {
   0.2619298,
   0.2197995,
   0.1585408,
   0.1542059,
   0.1651759,
   0.1833712,
   0.2162876,
   0.2717578,
   0.3567738,
   0.4271346,
   0.5445739};
   Double_t Graph0_fey1137[11] = {
   0.1725688,
   0.05788393,
   0.03307111,
   0.02704714,
   0.02498566,
   0.0239086,
   0.0242274,
   0.02572055,
   0.02800138,
   0.0273005,
   0.06508977};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1137,Graph0_fy1137,Graph0_fex1137,Graph0_fey1137);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01137 = new TH1F("Graph_Graph01137","S18_",100,218.0387,3021.891);
   Graph_Graph01137->SetMinimum(1.366355);
   Graph_Graph01137->SetMaximum(54.57815);
   Graph_Graph01137->SetDirectory(0);
   Graph_Graph01137->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01137->SetLineColor(ci);
   Graph_Graph01137->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01137->GetXaxis()->SetRange(0,101);
   Graph_Graph01137->GetXaxis()->CenterTitle(true);
   Graph_Graph01137->GetXaxis()->SetLabelFont(42);
   Graph_Graph01137->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01137->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01137->GetXaxis()->SetTitleFont(42);
   Graph_Graph01137->GetYaxis()->SetTitle("#sigma#theta_{y} [mrad] / 250 MeV");
   Graph_Graph01137->GetYaxis()->CenterTitle(true);
   Graph_Graph01137->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01137->GetYaxis()->SetLabelFont(42);
   Graph_Graph01137->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01137->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01137->GetYaxis()->SetTitleFont(42);
   Graph_Graph01137->GetZaxis()->SetLabelFont(42);
   Graph_Graph01137->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01137->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01137);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4466583,0.9362587,0.5533417,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}

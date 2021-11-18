void S0S12S18_theta_Y_RMS_vs_p_trackTruth_AAR_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 11:33:00 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(498.6539,-1.676024,2745.658,37.76053);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1068[11] = {
   451.9227,
   653.3392,
   880.2735,
   1123.022,
   1371.209,
   1620.262,
   1867.113,
   2115.519,
   2363.039,
   2613.873,
   2792.289};
   Double_t Graph0_fy1068[11] = {
   31.13356,
   25.74516,
   21.16689,
   17.90729,
   15.36894,
   13.22757,
   11.35431,
   9.599118,
   7.916339,
   6.225989,
   4.914658};
   Double_t Graph0_fex1068[11] = {
   0.08131598,
   0.06860802,
   0.04969907,
   0.04855625,
   0.0517878,
   0.05726557,
   0.06664662,
   0.08241969,
   0.1061373,
   0.130445,
   0.1816451};
   Double_t Graph0_fey1068[11] = {
   0.05421398,
   0.01813963,
   0.0104007,
   0.008539347,
   0.007821312,
   0.00745764,
   0.007458918,
   0.00779735,
   0.008297465,
   0.008236761,
   0.01792311};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1068,Graph0_fy1068,Graph0_fex1068,Graph0_fey1068);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01068 = new TH1F("Graph_Graph01068","S0S12S18_",100,217.7784,3026.534);
   Graph_Graph01068->SetMinimum(2.267631);
   Graph_Graph01068->SetMaximum(33.81687);
   Graph_Graph01068->SetDirectory(0);
   Graph_Graph01068->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01068->SetLineColor(ci);
   Graph_Graph01068->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01068->GetXaxis()->SetRange(19,82);
   Graph_Graph01068->GetXaxis()->CenterTitle(true);
   Graph_Graph01068->GetXaxis()->SetLabelFont(42);
   Graph_Graph01068->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01068->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01068->GetXaxis()->SetTitleFont(42);
   Graph_Graph01068->GetYaxis()->SetTitle("#sigma#theta_{y} [mrad] / 250 MeV");
   Graph_Graph01068->GetYaxis()->CenterTitle(true);
   Graph_Graph01068->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01068->GetYaxis()->SetLabelFont(42);
   Graph_Graph01068->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01068->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01068->GetYaxis()->SetTitleFont(42);
   Graph_Graph01068->GetZaxis()->SetLabelFont(42);
   Graph_Graph01068->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01068->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01068);
   
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

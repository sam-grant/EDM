void S12_Y_RMS_vs_p_trackReco_WORLD_250MeV_BQ_HS_1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Feb  1 16:31:02 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.3926,9.320285,3406.902,16.67954);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1101[11] = {
   451.8035,
   653.3616,
   880.3325,
   1123.156,
   1371.14,
   1620.289,
   1866.778,
   2114.882,
   2362.575,
   2614.184,
   2787.586};
   Double_t Graph0_fy1101[11] = {
   13.08676,
   13.01386,
   12.95647,
   12.86043,
   12.82284,
   12.77979,
   12.74916,
   12.69784,
   12.6585,
   12.65935,
   12.63385};
   Double_t Graph0_fex1101[11] = {
   0.1188671,
   0.1003469,
   0.07271107,
   0.071023,
   0.07561683,
   0.08358001,
   0.09743321,
   0.1220673,
   0.1594245,
   0.1959089,
   0.2394042};
   Double_t Graph0_fey1101[11] = {
   0.03321491,
   0.01341563,
   0.009313961,
   0.008972223,
   0.00953094,
   0.01051585,
   0.01225605,
   0.0152777,
   0.01992404,
   0.02516078,
   0.0724601};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1101,Graph0_fy1101,Graph0_fex1101,Graph0_fey1101);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01101 = new TH1F("Graph_Graph01101","S12_",100,218.0706,3021.439);
   Graph_Graph01101->SetMinimum(10.05621);
   Graph_Graph01101->SetMaximum(15.94362);
   Graph_Graph01101->SetDirectory(0);
   Graph_Graph01101->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01101->SetLineColor(ci);
   Graph_Graph01101->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01101->GetXaxis()->SetRange(0,101);
   Graph_Graph01101->GetXaxis()->CenterTitle(true);
   Graph_Graph01101->GetXaxis()->SetLabelFont(42);
   Graph_Graph01101->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01101->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01101->GetXaxis()->SetTitleFont(42);
   Graph_Graph01101->GetYaxis()->SetTitle("#sigma_{y} [mm] / 250 MeV");
   Graph_Graph01101->GetYaxis()->CenterTitle(true);
   Graph_Graph01101->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01101->GetYaxis()->SetLabelFont(42);
   Graph_Graph01101->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01101->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01101->GetYaxis()->SetTitleFont(42);
   Graph_Graph01101->GetZaxis()->SetLabelFont(42);
   Graph_Graph01101->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01101->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01101);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4466583,0.9362587,0.5533417,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}

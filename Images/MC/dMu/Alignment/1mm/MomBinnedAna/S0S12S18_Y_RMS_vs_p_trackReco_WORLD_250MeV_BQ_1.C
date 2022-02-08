void S0S12S18_Y_RMS_vs_p_trackReco_WORLD_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Feb  8 12:52:22 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-168.053,9.342763,3408.599,16.43291);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1212[11] = {
   451.5331,
   653.1241,
   880.0984,
   1123.216,
   1371.098,
   1620.241,
   1867.147,
   2115.294,
   2363.192,
   2614.676,
   2788.912};
   Double_t Graph0_fy1212[11] = {
   13.03736,
   13.01328,
   12.94884,
   12.89474,
   12.79903,
   12.76089,
   12.73747,
   12.71853,
   12.66712,
   12.56288,
   12.62326};
   Double_t Graph0_fex1212[11] = {
   0.1005982,
   0.08531884,
   0.06200382,
   0.06076808,
   0.06495001,
   0.07207143,
   0.08376628,
   0.1040283,
   0.1342656,
   0.165257,
   0.201986};
   Double_t Graph0_fey1212[11] = {
   0.0280799,
   0.01139359,
   0.00793598,
   0.007689467,
   0.008169288,
   0.009048584,
   0.01051381,
   0.01305136,
   0.0168119,
   0.02099747,
   0.0598091};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1212,Graph0_fy1212,Graph0_fex1212,Graph0_fey1212);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01212 = new TH1F("Graph_Graph01212","S0S12S18_",100,217.6644,3022.882);
   Graph_Graph01212->SetMinimum(10.05178);
   Graph_Graph01212->SetMaximum(15.7239);
   Graph_Graph01212->SetDirectory(0);
   Graph_Graph01212->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01212->SetLineColor(ci);
   Graph_Graph01212->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01212->GetXaxis()->SetRange(0,101);
   Graph_Graph01212->GetXaxis()->CenterTitle(true);
   Graph_Graph01212->GetXaxis()->SetLabelFont(42);
   Graph_Graph01212->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01212->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01212->GetXaxis()->SetTitleFont(42);
   Graph_Graph01212->GetYaxis()->SetTitle("#sigma_{y} [mm] / 250 MeV");
   Graph_Graph01212->GetYaxis()->CenterTitle(true);
   Graph_Graph01212->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01212->GetYaxis()->SetLabelFont(42);
   Graph_Graph01212->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01212->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01212->GetYaxis()->SetTitleFont(42);
   Graph_Graph01212->GetZaxis()->SetLabelFont(42);
   Graph_Graph01212->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01212->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01212);
   
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

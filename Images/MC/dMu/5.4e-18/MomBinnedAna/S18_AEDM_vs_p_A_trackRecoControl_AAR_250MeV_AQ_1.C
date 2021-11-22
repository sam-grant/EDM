void S18_AEDM_vs_p_A_trackRecoControl_AAR_250MeV_AQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov 22 14:12:27 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(8.41028,-0.002847415,3235.149,0.0088746);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1068[11] = {
   452.957,
   656.7828,
   885.1468,
   1123.533,
   1363.63,
   1601.179,
   1824.969,
   2102.272,
   2409.931,
   2636.456,
   2790.376};
   Double_t Graph0_fy1068[11] = {
   -9.40686e-05,
   3.339346e-06,
   -1.093568e-06,
   1.768719e-07,
   -1.596214e-07,
   4.080133e-06,
   1.640379e-05,
   0.003614065,
   0.0002290055,
   -0.0001328029,
   -0.0001755667};
   Double_t Graph0_fex1068[11] = {
   0.2854872,
   0.2115621,
   0.1418664,
   0.1303305,
   0.1506567,
   0.2139366,
   0.450887,
   2.641302,
   1.044509,
   0.5721221,
   0.512281};
   Double_t Graph0_fey1068[11] = {
   7.98478e-05,
   3.759625e-06,
   9.774659e-07,
   7.389119e-07,
   1.155502e-06,
   3.818117e-06,
   5.311246e-05,
   0.003306867,
   0.000550862,
   9.640185e-05,
   0.000718179};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1068,Graph0_fy1068,Graph0_fex1068,Graph0_fey1068);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01068 = new TH1F("Graph_Graph01068","S18_",100,218.8498,3024.71);
   Graph_Graph01068->SetMinimum(-0.001675213);
   Graph_Graph01068->SetMaximum(0.007702399);
   Graph_Graph01068->SetDirectory(0);
   Graph_Graph01068->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01068->SetLineColor(ci);
   Graph_Graph01068->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01068->GetXaxis()->SetRange(5,96);
   Graph_Graph01068->GetXaxis()->CenterTitle(true);
   Graph_Graph01068->GetXaxis()->SetLabelFont(42);
   Graph_Graph01068->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01068->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01068->GetXaxis()->SetTitleFont(42);
   Graph_Graph01068->GetYaxis()->SetTitle("A_{#gminus2} / 250 MeV");
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

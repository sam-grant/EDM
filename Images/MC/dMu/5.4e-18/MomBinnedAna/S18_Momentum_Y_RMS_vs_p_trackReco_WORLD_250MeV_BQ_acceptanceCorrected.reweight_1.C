void S18_Momentum_Y_RMS_vs_p_trackReco_WORLD_250MeV_BQ_acceptanceCorrected.reweight_1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Feb 22 00:44:55 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.0465,2.920801,3406.654,28.19244);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1139[11] = {
   452.0383,
   653.2767,
   880.5616,
   1123.015,
   1370.8,
   1619.721,
   1866.492,
   2115.018,
   2363.349,
   2612.121,
   2787.449};
   Double_t Graph0_fy1139[11] = {
   14.01873,
   16.64659,
   18.50786,
   20.00698,
   21.00314,
   21.38803,
   21.12772,
   20.23396,
   18.69234,
   16.29238,
   13.7941};
   Double_t Graph0_fex1139[11] = {
   0.1105323,
   0.09332027,
   0.06724064,
   0.0656172,
   0.07044104,
   0.07801539,
   0.09201272,
   0.1155807,
   0.1519345,
   0.1816586,
   0.2304013};
   Double_t Graph0_fey1139[11] = {
   0.03318565,
   0.01593137,
   0.01230714,
   0.01289276,
   0.01453558,
   0.01644743,
   0.0191789,
   0.0230405,
   0.02791345,
   0.03028407,
   0.07763966};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1139,Graph0_fy1139,Graph0_fex1139,Graph0_fey1139);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01139 = new TH1F("Graph_Graph01139","S18_",100,218.3526,3021.255);
   Graph_Graph01139->SetMinimum(5.447965);
   Graph_Graph01139->SetMaximum(25.66528);
   Graph_Graph01139->SetDirectory(0);
   Graph_Graph01139->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01139->SetLineColor(ci);
   Graph_Graph01139->GetXaxis()->SetTitle("Decay vertex momentum [MeV]#sigma_{p_{y}} [MeV] / 250 MeV");
   Graph_Graph01139->GetXaxis()->SetRange(0,101);
   Graph_Graph01139->GetXaxis()->CenterTitle(true);
   Graph_Graph01139->GetXaxis()->SetLabelFont(42);
   Graph_Graph01139->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01139->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01139->GetXaxis()->SetTitleFont(42);
   Graph_Graph01139->GetYaxis()->CenterTitle(true);
   Graph_Graph01139->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01139->GetYaxis()->SetLabelFont(42);
   Graph_Graph01139->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01139->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01139->GetYaxis()->SetTitleFont(42);
   Graph_Graph01139->GetZaxis()->SetLabelFont(42);
   Graph_Graph01139->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01139->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01139);
   
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

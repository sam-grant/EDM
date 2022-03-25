void S0_Momentum_Y_RMS_vs_p_trackReco_WORLD_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Mar 25 02:59:04 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-164.6244,11.79136,3377.861,23.49823);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1065[11] = {
   451.6492,
   653.2572,
   879.9206,
   1123.044,
   1371.41,
   1620.722,
   1868.001,
   2116.576,
   2363.177,
   2615.301,
   2789.538};
   Double_t Graph0_fy1065[11] = {
   14.16033,
   16.79009,
   18.69837,
   20.18134,
   21.15702,
   21.52632,
   21.24714,
   20.3871,
   18.72902,
   16.25276,
   13.82208};
   Double_t Graph0_fex1065[11] = {
   0.1383671,
   0.1171129,
   0.08543187,
   0.08352476,
   0.08892344,
   0.09816877,
   0.1126998,
   0.1364134,
   0.1707334,
   0.2138205,
   0.2464947};
   Double_t Graph0_fey1065[11] = {
   0.04217709,
   0.02020007,
   0.01577762,
   0.01657497,
   0.01849009,
   0.0207654,
   0.02355863,
   0.02739232,
   0.03169251,
   0.03493595,
   0.07957931};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1065,Graph0_fy1065,Graph0_fex1065,Graph0_fey1065);
   gre->SetName("Graph0");
   gre->SetTitle("S0_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01065 = new TH1F("Graph_Graph01065","S0_",100,217.6834,3023.612);
   Graph_Graph01065->SetMinimum(12.96204);
   Graph_Graph01065->SetMaximum(22.32754);
   Graph_Graph01065->SetDirectory(0);
   Graph_Graph01065->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01065->SetLineColor(ci);
   Graph_Graph01065->GetXaxis()->SetTitle("Decay vertex momentum [MeV]#sigma_{p_{y}} [MeV] / 250 MeV");
   Graph_Graph01065->GetXaxis()->SetRange(0,100);
   Graph_Graph01065->GetXaxis()->CenterTitle(true);
   Graph_Graph01065->GetXaxis()->SetLabelFont(42);
   Graph_Graph01065->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01065->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01065->GetXaxis()->SetTitleFont(42);
   Graph_Graph01065->GetYaxis()->CenterTitle(true);
   Graph_Graph01065->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01065->GetYaxis()->SetLabelFont(42);
   Graph_Graph01065->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01065->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01065->GetYaxis()->SetTitleFont(42);
   Graph_Graph01065->GetZaxis()->SetLabelFont(42);
   Graph_Graph01065->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01065->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01065);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4567085,0.9362587,0.5432915,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}

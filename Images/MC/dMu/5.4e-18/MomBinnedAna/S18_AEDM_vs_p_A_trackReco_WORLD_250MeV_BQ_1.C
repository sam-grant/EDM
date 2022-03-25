void S18_AEDM_vs_p_A_trackReco_WORLD_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Mar 25 02:59:10 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-163.4976,-1.574346e-05,3375.031,2.079494e-05);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1135[11] = {
   452.0477,
   653.2775,
   880.5348,
   1123.042,
   1370.867,
   1619.751,
   1866.475,
   2115.067,
   2363.258,
   2612.125,
   2787.408};
   Double_t Graph0_fy1135[11] = {
   -5.95103e-07,
   1.256685e-07,
   9.253068e-08,
   8.571325e-08,
   1.545484e-07,
   2.410722e-07,
   3.099804e-07,
   4.332104e-07,
   1.019071e-06,
   2.432168e-06,
   2.525741e-06};
   Double_t Graph0_fex1135[11] = {
   0.09825481,
   0.08285797,
   0.05975239,
   0.05830994,
   0.06253833,
   0.06928603,
   0.08176643,
   0.1027071,
   0.1350528,
   0.1614991,
   0.2033584};
   Double_t Graph0_fey1135[11] = {
   1.046696e-06,
   7.127965e-08,
   2.382656e-08,
   2.170395e-08,
   2.688261e-08,
   3.665998e-08,
   6.002509e-08,
   1.160424e-07,
   2.534785e-07,
   4.673519e-07,
   1.217947e-05};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1135,Graph0_fy1135,Graph0_fex1135,Graph0_fey1135);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01135 = new TH1F("Graph_Graph01135","S18_",100,218.3832,3021.178);
   Graph_Graph01135->SetMinimum(-1.208962e-05);
   Graph_Graph01135->SetMaximum(1.71411e-05);
   Graph_Graph01135->SetDirectory(0);
   Graph_Graph01135->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01135->SetLineColor(ci);
   Graph_Graph01135->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01135->GetXaxis()->SetRange(0,100);
   Graph_Graph01135->GetXaxis()->CenterTitle(true);
   Graph_Graph01135->GetXaxis()->SetLabelFont(42);
   Graph_Graph01135->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01135->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01135->GetXaxis()->SetTitleFont(42);
   Graph_Graph01135->GetYaxis()->SetTitle("A_{EDM} / 250 MeV");
   Graph_Graph01135->GetYaxis()->CenterTitle(true);
   Graph_Graph01135->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01135->GetYaxis()->SetLabelFont(42);
   Graph_Graph01135->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01135->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01135->GetYaxis()->SetTitleFont(42);
   Graph_Graph01135->GetZaxis()->SetLabelFont(42);
   Graph_Graph01135->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01135->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01135);
   
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

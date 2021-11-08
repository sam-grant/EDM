void S12_AEDM_vs_DS()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Oct 25 13:30:25 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0.25,3.610112e-19,4.75,2.561045e-18);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1008[4] = {
   1,
   2,
   3,
   4};
   Double_t _fy1008[4] = {
   1.846481e-18,
   1.012933e-18,
   1.946359e-18,
   1.631742e-18};
   Double_t _fex1008[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1008[4] = {
   3.398103e-19,
   2.85249e-19,
   2.480132e-19,
   1.845294e-19};
   TGraphErrors *gre = new TGraphErrors(4,_fx1008,_fy1008,_fex1008,_fey1008);
   gre->SetName("");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1008 = new TH1F("Graph_Graph1008","S12",100,0.7,4.3);
   Graph_Graph1008->SetMinimum(5.810146e-19);
   Graph_Graph1008->SetMaximum(2.341041e-18);
   Graph_Graph1008->SetDirectory(0);
   Graph_Graph1008->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1008->SetLineColor(ci);
   Graph_Graph1008->GetXaxis()->SetBinLabel(9,"Run-1a");
   Graph_Graph1008->GetXaxis()->SetBinLabel(37,"Run-1b");
   Graph_Graph1008->GetXaxis()->SetBinLabel(64,"Run-1c");
   Graph_Graph1008->GetXaxis()->SetBinLabel(92,"Run-1d");
   Graph_Graph1008->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph1008->GetXaxis()->CenterTitle(true);
   Graph_Graph1008->GetXaxis()->SetLabelFont(42);
   Graph_Graph1008->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1008->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1008->GetXaxis()->SetTitleFont(42);
   Graph_Graph1008->GetYaxis()->SetTitle("d_{#mu}^{BLIND} [e#upointcm]");
   Graph_Graph1008->GetYaxis()->CenterTitle(true);
   Graph_Graph1008->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1008->GetYaxis()->SetLabelFont(42);
   Graph_Graph1008->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1008->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph1008->GetYaxis()->SetTitleFont(42);
   Graph_Graph1008->GetZaxis()->SetLabelFont(42);
   Graph_Graph1008->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1008->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1008);
   
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

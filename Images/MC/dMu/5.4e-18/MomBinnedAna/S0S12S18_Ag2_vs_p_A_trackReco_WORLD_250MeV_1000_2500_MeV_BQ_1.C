void S0S12S18_Ag2_vs_p_A_trackReco_WORLD_250MeV_1000_2500_MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Fri May  6 11:12:50 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-163.8644,-7.610667e-06,3375.839,4.908053e-06);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1210[11] = {
   451.8482,
   653.332,
   880.3222,
   1123.094,
   1371.099,
   1620.134,
   1866.992,
   2115.379,
   2362.982,
   2613.714,
   2788.104};
   Double_t Graph0_fy1210[11] = {
   -2.168392e-07,
   1.480392e-08,
   -2.274875e-09,
   -1.513199e-10,
   4.483754e-09,
   -1.057552e-08,
   1.361775e-08,
   1.989955e-08,
   5.533429e-08,
   -1.700235e-08,
   -1.351307e-06};
   Double_t Graph0_fex1210[11] = {
   0.06111782,
   0.05160074,
   0.03736694,
   0.03649742,
   0.03897795,
   0.04310138,
   0.05036302,
   0.06271814,
   0.08133228,
   0.09940153,
   0.121472};
   Double_t Graph0_fey1210[11] = {
   2.637245e-07,
   1.750609e-08,
   5.895573e-09,
   5.36873e-09,
   6.531679e-09,
   9.005146e-09,
   1.482324e-08,
   3.020024e-08,
   7.322229e-08,
   1.585639e-07,
   4.172907e-06};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1210,Graph0_fy1210,Graph0_fex1210,Graph0_fey1210);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01210 = new TH1F("Graph_Graph01210","S0S12S18_",100,218.1433,3021.869);
   Graph_Graph01210->SetMinimum(-6.358795e-06);
   Graph_Graph01210->SetMaximum(3.656181e-06);
   Graph_Graph01210->SetDirectory(0);
   Graph_Graph01210->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01210->SetLineColor(ci);
   Graph_Graph01210->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01210->GetXaxis()->SetRange(0,100);
   Graph_Graph01210->GetXaxis()->CenterTitle(true);
   Graph_Graph01210->GetXaxis()->SetLabelFont(42);
   Graph_Graph01210->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01210->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01210->GetXaxis()->SetTitleFont(42);
   Graph_Graph01210->GetYaxis()->SetTitle("A_{g#minus2} / 250 MeV");
   Graph_Graph01210->GetYaxis()->CenterTitle(true);
   Graph_Graph01210->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01210->GetYaxis()->SetLabelFont(42);
   Graph_Graph01210->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01210->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01210->GetYaxis()->SetTitleFont(42);
   Graph_Graph01210->GetZaxis()->SetLabelFont(42);
   Graph_Graph01210->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01210->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01210);
   
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

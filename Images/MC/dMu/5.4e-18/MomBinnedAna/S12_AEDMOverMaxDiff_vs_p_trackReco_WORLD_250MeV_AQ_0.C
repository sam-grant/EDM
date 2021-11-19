void S12_AEDMOverMaxDiff_vs_p_trackReco_WORLD_250MeV_AQ_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Nov 19 17:35:01 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-336.2053,-0.001703564,3335.002,0.003214034);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1062[12] = {
   176.9499,
   432.0898,
   628.443,
   872.9939,
   1121.66,
   1371.549,
   1620.298,
   1868.258,
   2116.438,
   2363.083,
   2614.356,
   2826.288};
   Double_t Graph0_fy1062[12] = {
   0.0001113052,
   0.0002260863,
   0.0001730335,
   0.0003238889,
   0.0004089099,
   0.0008270884,
   0.0005073229,
   0.001200054,
   0.0009624262,
   0.0009507703,
   0.001184742,
   0.001812962};
   Double_t Graph0_fex1062[12] = {
   0.7206046,
   0.0703677,
   0.06339667,
   0.06384642,
   0.06844611,
   0.07394814,
   0.08138022,
   0.09307723,
   0.1109457,
   0.1412249,
   0.1860587,
   0.225681};
   Double_t Graph0_fey1062[12] = {
   0.0009952695,
   6.899601e-05,
   3.369355e-05,
   3.860651e-05,
   5.758865e-05,
   0.0001011309,
   5.825667e-05,
   0.000121945,
   0.0001538498,
   0.000261792,
   0.0002376814,
   0.0005814722};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1062,Graph0_fy1062,Graph0_fex1062,Graph0_fey1062);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01062 = new TH1F("Graph_Graph01062","S12_",100,0,3091.543);
   Graph_Graph01062->SetMinimum(-0.001211804);
   Graph_Graph01062->SetMaximum(0.002722274);
   Graph_Graph01062->SetDirectory(0);
   Graph_Graph01062->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01062->SetLineColor(ci);
   Graph_Graph01062->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01062->GetXaxis()->SetRange(2,96);
   Graph_Graph01062->GetXaxis()->CenterTitle(true);
   Graph_Graph01062->GetXaxis()->SetLabelFont(42);
   Graph_Graph01062->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01062->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01062->GetXaxis()->SetTitleFont(42);
   Graph_Graph01062->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX} / 250 MeV");
   Graph_Graph01062->GetYaxis()->CenterTitle(true);
   Graph_Graph01062->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01062->GetYaxis()->SetLabelFont(42);
   Graph_Graph01062->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01062->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01062->GetYaxis()->SetTitleFont(42);
   Graph_Graph01062->GetZaxis()->SetLabelFont(42);
   Graph_Graph01062->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01062->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01062);
   
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

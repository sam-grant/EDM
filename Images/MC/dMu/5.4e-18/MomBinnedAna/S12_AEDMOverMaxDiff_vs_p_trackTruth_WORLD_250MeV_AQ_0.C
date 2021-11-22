void S12_AEDMOverMaxDiff_vs_p_trackTruth_WORLD_250MeV_AQ_0()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov 22 14:17:46 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-301.5203,-0.2093248,3332.186,0.04967912);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1062[12] = {
   199.6938,
   433.1149,
   628.51,
   873.0274,
   1121.693,
   1371.626,
   1620.292,
   1868.203,
   2116.519,
   2363.163,
   2613.773,
   2829.106};
   Double_t Graph0_fy1062[12] = {
   -0.1661575,
   0.001171435,
   0.001153024,
   0.001835577,
   0.001754761,
   0.002384139,
   0.00262141,
   0.003590507,
   0.002899532,
   0.002154273,
   0.003355101,
   0.005129541};
   Double_t Graph0_fex1062[12] = {
   2.06251,
   0.06941114,
   0.06342483,
   0.06383254,
   0.06845521,
   0.07384935,
   0.08111735,
   0.09276644,
   0.110902,
   0.1406175,
   0.186901,
   0.2380528};
   Double_t Graph0_fey1062[12] = {
   -0.002196095,
   0.0003172417,
   0.0002233529,
   0.000242382,
   0.0002613723,
   0.0002887628,
   0.0003343475,
   0.0003931434,
   0.0004438219,
   0.0005352392,
   0.000718091,
   0.001382257};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1062,Graph0_fy1062,Graph0_fex1062,Graph0_fey1062);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01062 = new TH1F("Graph_Graph01062","S12_",100,0,3092.516);
   Graph_Graph01062->SetMinimum(-0.1834244);
   Graph_Graph01062->SetMaximum(0.02377873);
   Graph_Graph01062->SetDirectory(0);
   Graph_Graph01062->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01062->SetLineColor(ci);
   Graph_Graph01062->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01062->GetXaxis()->SetRange(3,96);
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

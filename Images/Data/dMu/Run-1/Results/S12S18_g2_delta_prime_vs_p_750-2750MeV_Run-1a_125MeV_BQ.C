void S12S18_g2_delta_prime_vs_p_750-2750MeV_Run-1a_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Dec  5 23:48:13 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(350.182,-1.435109,3144.09,1.631541);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1011[16] = {
   815.8333,
   938.5324,
   1062.751,
   1188.29,
   1312.702,
   1435.864,
   1561.907,
   1685.205,
   1810.549,
   1935.124,
   2060.256,
   2184.912,
   2309.216,
   2433.15,
   2559.65,
   2678.438};
   Double_t _fy1011[16] = {
   0.09821599,
   0.7825547,
   -0.1210605,
   -0.003510433,
   0.1780138,
   0.2748505,
   0.1443277,
   -0.335981,
   -0.4568818,
   0.2874555,
   -0.1602187,
   -0.3216833,
   -0.6469549,
   -0.320481,
   0.287846,
   -0.0118272};
   Double_t _fex1011[16] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1011[16] = {
   0.4460583,
   0.3615966,
   0.3145585,
   0.2824055,
   0.2652539,
   0.252894,
   0.2553753,
   0.2509335,
   0.2659263,
   0.2762671,
   0.3002062,
   0.3187568,
   0.3527753,
   0.4068869,
   0.4666944,
   0.5558575};
   TGraphErrors *gre = new TGraphErrors(16,_fx1011,_fy1011,_fex1011,_fey1011);
   gre->SetName("");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1011 = new TH1F("Graph_Graph1011","S12S18",100,629.5728,2864.699);
   Graph_Graph1011->SetMinimum(-1.128444);
   Graph_Graph1011->SetMaximum(1.324876);
   Graph_Graph1011->SetDirectory(0);
   Graph_Graph1011->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1011->SetLineColor(ci);
   Graph_Graph1011->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1011->GetXaxis()->CenterTitle(true);
   Graph_Graph1011->GetXaxis()->SetLabelFont(42);
   Graph_Graph1011->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1011->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1011->GetXaxis()->SetTitleFont(42);
   Graph_Graph1011->GetYaxis()->SetTitle("#delta'_{g#minus2}^{} [mrad] / 125 MeV");
   Graph_Graph1011->GetYaxis()->CenterTitle(true);
   Graph_Graph1011->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1011->GetYaxis()->SetLabelFont(42);
   Graph_Graph1011->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1011->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1011->GetYaxis()->SetTitleFont(42);
   Graph_Graph1011->GetZaxis()->SetLabelFont(42);
   Graph_Graph1011->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1011->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1011);
   
   
   TF1 *pol01012 = new TF1("pol0","pol0",750,2750, TF1::EAddToList::kNo);
   pol01012->SetFillColor(19);
   pol01012->SetFillStyle(0);
   pol01012->SetLineColor(2);
   pol01012->SetLineWidth(2);
   pol01012->SetChisquare(18.20056);
   pol01012->SetNDF(15);
   pol01012->GetXaxis()->SetLabelFont(42);
   pol01012->GetXaxis()->SetTitleOffset(1);
   pol01012->GetXaxis()->SetTitleFont(42);
   pol01012->GetYaxis()->SetLabelFont(42);
   pol01012->GetYaxis()->SetTitleFont(42);
   pol01012->SetParameter(0,-0.02747183);
   pol01012->SetParError(0,0.0775062);
   pol01012->SetParLimits(0,0,0);
   pol01012->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01012);
   gre->Draw("ap");
   
   TLegend *leg = new TLegend(0.11,0.75,0.59,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("","Data: Run-1a","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("pol0","#LT#delta'#GT = -0.027
#pm0.08
 mrad","lpf");
   entry->SetFillColor(19);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.4253015,0.94,0.5746985,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}

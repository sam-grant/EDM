void S12_g2_delta_prime_vs_p_750-2750MeV_Run-1c_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Dec  2 14:47:02 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(350.3633,-1.294731,3144.446,1.474926);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1031[16] = {
   816.0438,
   938.5662,
   1062.777,
   1188.406,
   1312.66,
   1436.011,
   1561.94,
   1685.36,
   1810.626,
   1935.175,
   2060.29,
   2185.097,
   2309.115,
   2432.874,
   2559.589,
   2678.766};
   Double_t _fy1031[16] = {
   0.09009732,
   0.5855962,
   0.1579608,
   0.271191,
   0.1454716,
   -0.007846699,
   0.07297721,
   -0.4666499,
   0.06291882,
   0.1028164,
   -0.2633009,
   -0.4402373,
   0.1313412,
   0.3406036,
   0.5387824,
   0.2500354};
   Double_t _fex1031[16] = {
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
   Double_t _fey1031[16] = {
   0.4028592,
   0.3212434,
   0.2764081,
   0.2473054,
   0.2311575,
   0.2194636,
   0.2234261,
   0.220817,
   0.2354487,
   0.2484294,
   0.2750785,
   0.3006584,
   0.3440937,
   0.4191935,
   0.5182239,
   0.677412};
   TGraphErrors *gre = new TGraphErrors(16,_fx1031,_fy1031,_fex1031,_fey1031);
   gre->SetName("");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1031 = new TH1F("Graph_Graph1031","S12",100,629.7716,2865.038);
   Graph_Graph1031->SetMinimum(-1.017765);
   Graph_Graph1031->SetMaximum(1.19796);
   Graph_Graph1031->SetDirectory(0);
   Graph_Graph1031->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1031->SetLineColor(ci);
   Graph_Graph1031->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1031->GetXaxis()->CenterTitle(true);
   Graph_Graph1031->GetXaxis()->SetLabelFont(42);
   Graph_Graph1031->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1031->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1031->GetXaxis()->SetTitleFont(42);
   Graph_Graph1031->GetYaxis()->SetTitle("#delta'_{g#minus2}^{} [mrad] / 125 MeV");
   Graph_Graph1031->GetYaxis()->CenterTitle(true);
   Graph_Graph1031->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1031->GetYaxis()->SetLabelFont(42);
   Graph_Graph1031->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1031->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1031->GetYaxis()->SetTitleFont(42);
   Graph_Graph1031->GetZaxis()->SetLabelFont(42);
   Graph_Graph1031->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1031->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1031);
   
   
   TF1 *pol01032 = new TF1("pol0","pol0",750,2750, TF1::EAddToList::kNo);
   pol01032->SetFillColor(19);
   pol01032->SetFillStyle(0);
   pol01032->SetLineColor(2);
   pol01032->SetLineWidth(2);
   pol01032->SetChisquare(14.94146);
   pol01032->SetNDF(15);
   pol01032->GetXaxis()->SetLabelFont(42);
   pol01032->GetXaxis()->SetTitleOffset(1);
   pol01032->GetXaxis()->SetTitleFont(42);
   pol01032->GetYaxis()->SetLabelFont(42);
   pol01032->GetYaxis()->SetTitleFont(42);
   pol01032->SetParameter(0,0.03547505);
   pol01032->SetParError(0,0.07003661);
   pol01032->SetParLimits(0,0,0);
   pol01032->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01032);
   gre->Draw("ap");
   
   TLegend *leg = new TLegend(0.11,0.75,0.59,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("","Data: Run-1c","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.035
#pm0.07
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

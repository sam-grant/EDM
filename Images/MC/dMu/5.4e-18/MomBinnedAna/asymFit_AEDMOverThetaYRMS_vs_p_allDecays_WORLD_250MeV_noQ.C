void asymFit_AEDMOverThetaYRMS_vs_p_allDecays_WORLD_250MeV_noQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Dec  9 17:27:48 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(-0.1248292,-0.01373862,1.123463,0.3264777);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1001[12] = {
   0.03978071,
   0.1196111,
   0.1994389,
   0.2792517,
   0.3590627,
   0.4388203,
   0.5185257,
   0.598184,
   0.6777324,
   0.7570116,
   0.835663,
   0.9114651};
   Double_t _fy1001[12] = {
   0.03103034,
   0.09770952,
   0.1303727,
   0.1689283,
   0.1959883,
   0.2172711,
   0.2329308,
   0.2495955,
   0.214803,
   0.2519472,
   0.1901952,
   0.1546617};
   Double_t _fex1001[12] = {
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
   Double_t _fey1001[12] = {
   0.008493659,
   0.008617141,
   0.008857514,
   0.009190448,
   0.009636589,
   0.01023693,
   0.01102704,
   0.01209846,
   0.01362839,
   0.01597069,
   0.02006542,
   0.02993857};
   TGraphErrors *gre = new TGraphErrors(12,_fx1001,_fy1001,_fex1001,_fey1001);
   gre->SetName("");
   gre->SetTitle(";#lambda=p/p_{max};A_{EDM}/#sigma_{#theta_{y}} [normalised units]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1001 = new TH1F("Graph_Graph1001","",100,0,0.9986335);
   Graph_Graph1001->SetMinimum(0.02028301);
   Graph_Graph1001->SetMaximum(0.292456);
   Graph_Graph1001->SetDirectory(0);
   Graph_Graph1001->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1001->SetLineColor(ci);
   Graph_Graph1001->GetXaxis()->SetTitle("#lambda=p/p_{max}");
   Graph_Graph1001->GetXaxis()->CenterTitle(true);
   Graph_Graph1001->GetXaxis()->SetLabelFont(42);
   Graph_Graph1001->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1001->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1001->GetXaxis()->SetTitleFont(42);
   Graph_Graph1001->GetYaxis()->SetTitle("A_{EDM}/#sigma_{#theta_{y}} [normalised units]");
   Graph_Graph1001->GetYaxis()->CenterTitle(true);
   Graph_Graph1001->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1001->GetYaxis()->SetLabelFont(42);
   Graph_Graph1001->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1001->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph1001->GetYaxis()->SetTitleFont(42);
   Graph_Graph1001->GetZaxis()->SetLabelFont(42);
   Graph_Graph1001->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1001);
   
   
   TF1 *fit1002 = new TF1("fit","[0] * (sqrt(x * (1-x)) * (1 + 4*x) ) / (5 + 5*x - 4*x*x)",0,0.9986335, TF1::EAddToList::kNo);
   fit1002->SetFillColor(19);
   fit1002->SetFillStyle(0);
   fit1002->SetLineColor(2);
   fit1002->SetLineWidth(2);
   fit1002->SetChisquare(33.16851);
   fit1002->SetNDF(11);
   fit1002->GetXaxis()->SetLabelFont(42);
   fit1002->GetXaxis()->SetTitleOffset(1);
   fit1002->GetXaxis()->SetTitleFont(42);
   fit1002->GetYaxis()->SetLabelFont(42);
   fit1002->GetYaxis()->SetTitleFont(42);
   fit1002->SetParameter(0,0.9744795);
   fit1002->SetParError(0,0.01775307);
   fit1002->SetParLimits(0,0,0);
   fit1002->SetParent(gre);
   gre->GetListOfFunctions()->Add(fit1002);
   gre->Draw("ap");
   
   TF1 *fit1003 = new TF1("fit",";#lambda=p/p_{max};A_{EDM}/#sigma_{#theta_{y}}",0.1196111,0.6777324, TF1::EAddToList::kDefault);
   fit1003->SetFillColor(19);
   fit1003->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   fit1003->SetLineColor(ci);
   fit1003->SetLineWidth(3);
   fit1003->SetChisquare(33.16851);
   fit1003->SetNDF(11);
   fit1003->GetXaxis()->SetTitle("#lambda=p/p_{max}");
   fit1003->GetXaxis()->CenterTitle(true);
   fit1003->GetXaxis()->SetLabelFont(42);
   fit1003->GetXaxis()->SetTitleSize(0.04);
   fit1003->GetXaxis()->SetTitleOffset(1.1);
   fit1003->GetXaxis()->SetTitleFont(42);
   fit1003->GetYaxis()->SetTitle("A_{EDM}/#sigma_{#theta_{y}}");
   fit1003->GetYaxis()->CenterTitle(true);
   fit1003->GetYaxis()->SetNdivisions(4000510);
   fit1003->GetYaxis()->SetLabelFont(42);
   fit1003->GetYaxis()->SetTitleSize(0.04);
   fit1003->GetYaxis()->SetTitleOffset(1.1);
   fit1003->GetYaxis()->SetTitleFont(42);
   fit1003->SetParameter(0,0.9744795);
   fit1003->SetParError(0,0.01775307);
   fit1003->SetParLimits(0,0,0);
   fit1003->Draw("SAME");
   
   TLegend *leg = new TLegend(0.15,0.7,0.45,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("","Sim: all decays","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("fit","Fit: #frac{8}{5} #frac{#sqrt{#lambda(1-#lambda)}(1 + 4#lambda)}{(5 + 5#lambda - 4#lambda^{2})}","lpf");
   entry->SetFillColor(19);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
